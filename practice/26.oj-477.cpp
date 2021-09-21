/*************************************************************************
	> File Name: 26.oj-477.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 22 Sep 2021 12:55:41 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {

    int ans = 0, last = -1;
    char s[105];
    cin >> s;
    // the last entry of string is \0
    for (int i = 0; s[i]; i++) {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
            if (last == -1) {
                last = i;
            } else {
                ans = max(ans, i - last);
                last = i;
            }
        }

    }
    cout << ans << endl;

    return 0;
}
