/*************************************************************************
	> File Name: 2.euler_2.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 09 Jan 2021 12:52:00 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int a = 1, b = 1, c = 2, ans = 0;
    while (c <= 4000000) {
        if (c % 2 == 0) {
            ans += c;
        }
        c = b + c;
        a = b;
        b = c - b;
    }
    cout << ans << endl;
    return 0;
}

