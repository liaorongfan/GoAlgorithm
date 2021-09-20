/*************************************************************************
	> File Name: 17.euler36.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 10 Apr 2021 12:05:49 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int check(int x, int n) {
    int raw = x, t = 0;
    while (x) {
        t = t *n + x % n;
        x /= n;
    }
    return t == raw;
}

int main() {
    int ans = 0;
    for (int i = 1; i < 1000000; i++) {
        if (check(i, 10) && check(i, 2)) {
            ans += i;
            cout << i << endl;
        }
    }
    cout << ans << endl;
    return 0;
}
