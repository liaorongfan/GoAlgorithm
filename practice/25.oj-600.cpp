/*************************************************************************
	> File Name: 25.oj-600.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 22 Sep 2021 12:38:12 AM CST
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;


int n, m, t, num[3005][3005];

int main() {
    // input data
    scanf("%d%d%d", &n, &m, &t);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=m; j++) {
            scanf("%d", &num[i][j]);
        }
    }

    // init coordinate to the left dottom of the matrix
    int x = n, y = 1;
    while(1) {
        // if (x == 0 || y > m ): break;
 
        if (num[x][y] == t) {
            cout << x << " " << y << endl;
            return 0;
        }
        if (num[x][y] > t) {
            x--;
        } else {
            y++;
        }
    }
    cout << -1 << endl;



    return 0;
}
