/*************************************************************************
	> File Name: arr.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 29 Sep 2021 12:11:21 AM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;


int n, m, arr[105][105];

int main() {
    memset(arr, 0x3F, sizeof(arr));  // 将数组里的值初始化为一个比较大的数
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int s, e, v;
        cin >> s >> e >> v;
        arr[s][e] = min(v, arr[s][e]);  // 如果有重边，保留最小的边
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=n; j++) {
            if (arr[i][j] != 0x3F3F3F3F) {
                cout << arr[i][j] << " ";
            } else {
                cout << 0 << " ";
            }
        }
        cout <<  endl;
    }

    return 0;
}
