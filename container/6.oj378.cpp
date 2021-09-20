/*************************************************************************
	> File Name: 6.oj378.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 17 Apr 2021 12:31:47 AM CST
 ************************************************************************/

#include<iostream>
#include<stack>
using namespace std;


int main(){
    string s;
    cin >> s;
    stack<char> sta;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            sta.push(s[i]);
        } else if (s[i] == ')') {
            if (sta.empty() || sta.top() != '(') {
                cout << "NO" << endl;
                return 0;
            }
            sta.pop();
        } else if (s[i] == ']') {
            if (sta.empty() || sta.top() != '[') {
                    cout << "NO" << endl;
                    return 0;
            }
            sta.pop();
        } else if (s[i] == '}') {
            if (sta.empty() || sta.top() != '{') {
                cout << "NO" << endl;
                return 0;
            }
            sta.pop();
        }
    }

    if (sta.empty()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}

