/*************************************************************************
	> File Name: 11.euler_grid.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 01 Apr 2021 11:06:29 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    /*
    long long dp[25][25] = {0};
    //循环横向的20
    for ( int i = 1; i <= 21; i++ ){
        //循环纵向的20
        for (int j = 1; j <= 21; j++) {
            if (i == 1 && j==1) {
                dp[i][j] = 1;
            } else {
                dp[i][j] = dp[i - 1][j] + dp[i][j -1];
            }
        }
    }
    cout << dp[21][21] << endl;
    */

    long long ans = 1;
    for (int i = 40, j = 1; i > 20; i--, j++){
        ans *= i;
        ans /= j;
    }

    cout << ans << endl;

    return 0;
}
