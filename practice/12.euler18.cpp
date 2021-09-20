/*************************************************************************
	> File Name: 12.euler18.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 07 Apr 2021 12:10:40 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int n, num[20][20], ans[20][20];


int main() {
    //读入数据
    n = 15;
    for (int i = 1; i <= n; i++) {
        //每一行有i个值
        for (int j = 1; j <= i; j++) {
            cin >> num[i][j];
        }
    }
    /*
    //从上往下计算
    int fin = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++ ) {
            ans[i][j] = max(ans[i - 1][j - 1], ans[i - 1][j]) + num[i][i];
            fin = max(fin, ans[i][j]);
        }
    }
    cout << fin << endl;
    */

    //从下往上求
    for (int i = n; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            ans[i][j] = max(ans[i + 1][j], ans[i + 1][j + 1]) + num[i][j];
        }
    }

    cout << ans[1][1] << endl;
    return 0;
}
