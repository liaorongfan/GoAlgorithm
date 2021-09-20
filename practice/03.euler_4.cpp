/*************************************************************************
	> File Name: 3.euler.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 09 Jan 2021 01:34:51 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int reverse_equal(int x) {
    int t = 0, raw = x;
    //当x不为零时
    while(x) {
        //每次拿到x的最后一位 加到 t * 10 里
        t = t * 10 + x % 10;
        x /= 10;
    }
    return t == raw;
}



int main(){
    int ans = 0;
    for (int i = 100; i < 1000; i++) {
        for (int j = i; j < 1000; j++) {
            int t = i * j;
            if (reverse_equal(t)) {
                ans = max(ans, t);
            }
        }
    }
    cout << ans << endl;
    return 0;
}

