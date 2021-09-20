/*************************************************************************
	> File Name: 13.oj-590.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 07 Apr 2021 11:57:29 PM CST
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;


int n, m;
int num[1005][1005];
int utd[1005][1005], dtu[1005][1005];
int ans[1005][1005], mmax[1005][2];
 
int main() {
    scanf("%d%d", &n, &m);
    //读入数据
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            scanf("%d", &num[i][j]);
        }
    }
    // 从上往下 计算答案
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            utd[i][j] = max(utd[i -1][j - 1], utd[i - 1][j]) + num[i][j];
        }
    }
    // 从下往上 计算答案
    for (int i = n; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            dtu[i][j] = max(dtu[i + 1][j], dtu[i + 1][j + 1]) + num[i][j];
        }
    }
    
    for (int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            ans[i][j] = utd[i][j] + dtu[i][j] - num[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        int m2 = 0, m1 = 0, cnt = 0;
        for (int j = 1; j <= i; j++) {
            if (ans[i][j] > m1) {
                m2 = m1;
                m1 = ans[i][j];
                cnt = j;
            } else if (m2 < ans[i][j]) {
                m2 = ans[i][j];
            }
        }
        mmax[i][0] = cnt;
        mmax[i][1] = m2;
    }
    for (int i = 0; i < m; i++) {
        int a, b;
        scanf("%d%d", &a, &b);
        if ( a == 1 && b == 1 ) {
            printf("-1\n");
        } else if (mmax[a][0] == b) {
            printf("%d\n", mmax[a][1]);
        } else {
            printf("%d\n", dtu[1][1]);
        }

    }

    return 0;
}
