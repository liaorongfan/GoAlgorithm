/*************************************************************************
	> File Name: 17.oj380.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 10 Apr 2021 12:29:31 AM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


struct node {
    int num;
    string s;
};

int n;
node p[105];

bool cmp(node &a, node &b) {
    if (a.s.size() == b.s.size()) {
        return a.s > b.s;
    }
    return a.s.size() > b.s.size();
}


int main() {
    cin >> n;
    // 循环读入n个数据
    for (int i = 1; i <= n; i++) {
        cin >> p[i].s; //输入第i个人的票数
        p[i].num = i;
    }

    sort(p + 1, p + n + 1, cmp); //起始位置 p, 结束位置 p + n, 排序方法
    
    cout << p[1].num << endl << p[1].s << endl;

    return 0;
}
