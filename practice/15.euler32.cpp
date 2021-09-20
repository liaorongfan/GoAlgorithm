/*************************************************************************
	> File Name: 15.euler32.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 08 Apr 2021 11:35:49 PM CST
 ************************************************************************/

#include<iostream>
#include<cmath>  
using namespace std;

// 计算数字位数
int digit(int x) {
    return (int)floor(log10(x)) + 1;
}

int check(int x, int *num) {
    while (x) {
        if (num[x % 10] == 1) {
            return 0;
        }
        num[x % 10] = 1;
        x /= 10;
    }
    return 1;
}


int func(int a, int b, int c) {
    int num[10] = {1};
    if (check(a, num) == 0) return 0;
    if (check(b, num) == 0) return 0;
    if (check(c, num) == 0) return 0;
    return 1;
}


int main() {
    int ans = 0, mark[10005] = {0};
    for (int i = 1; i < 100; i++) { 
        for (int j = i + 1; 1; j++) {
            int a = digit(i), b = digit(j), c = digit(i * j);
            if (a + b + c == 9) {
                if (func(i, j, i * j)) {
                    if (mark[i * j] == 0) {
                        mark[i * j] = 1;
                        ans += i * j;
                    }
                    cout << i << " * " << j << " = " << i * j << endl;
                }
            } else if (a + b + c > 9) {
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
