/*************************************************************************
	> File Name: 2.stack.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 10 Apr 2021 08:18:06 PM CST
 ************************************************************************/

#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> sta;
    for (int i = 9; i > 4; i--) {
        sta.push(i);
    }
    while(!sta.empty()) {
        cout << "sta.top() = " << sta.top() << "\tsta.size() = " << sta.size() << endl;
        sta.pop();
    }
    return 0;
}

