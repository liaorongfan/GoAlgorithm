/*************************************************************************
	> File Name: floyd.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 29 Sep 2021 12:39:05 AM CST
 ************************************************************************/

#include<iostream>
#include<cstring>  // 初始化极大值用
using namespace std;


int n, m, s, arr[1005][1005];

int main() {
    memset(arr, 0x3F, sizeof(arr));
    cin >> n >> m >> s;
    // 点 自己到自己的权值为0
    for (int i = 1; i <= n; i++) {
        arr[i][i] = 0;
    }

    for (int i = 0; i < m; i++) {
        int s, e, v;
        cin >> s >> e >> v;
        arr[s][e] = min(arr[s][e], v);
        arr[e][s] = min(arr[e][s], v);
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                arr[j][k] = min(arr[j][k], arr[j][i] + arr[i][k]);
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        if (arr[s][i] != 0x3F3F3F3F) {
            cout << arr[s][i] << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
