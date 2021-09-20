/*************************************************************************
	> File Name: 4.euler_6.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 09 Jan 2021 03:47:00 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main() {
    int sum = 0, psum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
        psum += i * i;
    }
    cout << sum * sum - psum << endl;
}


