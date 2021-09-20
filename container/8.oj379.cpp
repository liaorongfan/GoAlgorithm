/*************************************************************************
	> File Name: 8.oj379.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 17 Apr 2021 01:53:11 PM CST
 ************************************************************************/

#include<iostream>
#include<stack>
using namespace std;


int main() {
    int n;
    stack<int> g, mmax;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        if (t == 0) {
            cin >> t;
            g.push(t);
            if (mmax.empty()) {
                mmax.push(t);
            } else {
                mmax.push(max(t, mmax.top()));
            }
        }
        else if (t == 1) {
            if (!g.empty()) {
                g.pop();
                mmax.pop();
            }
        } else if (t == 2) {
            if (g.empty()) {
                cout << 0 << endl;
            } else {
                cout << mmax.top() << endl;
            }
        }
    }

    return 0;
}
