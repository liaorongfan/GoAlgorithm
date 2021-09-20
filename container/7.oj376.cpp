/*************************************************************************
	> File Name: 7.oj376.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 17 Apr 2021 01:15:14 AM CST
 ************************************************************************/

#include<iostream>
#include<queue>
using namespace std;

int ans, n, m, mark[1005];

int main() {

    cin >> m >> n;

    queue<int> que;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        if (mark[t] == 0) {
            ans++;
            if (que.size() == m) {
                mark[que.front()] = 0;
                que.pop();
            }
            que.push(t);
            mark[t] = 1;
        }
    }
    cout << ans << endl;
    return 0;
}
