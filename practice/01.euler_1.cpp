/*************************************************************************
	> File Name: 1.euler_1.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 09 Jan 2021 12:17:41 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    /*
    int ans = 0;
    for (int i = 1; i < 1000; i++) {
        if ( i % 3 == 0 || i % 5 == 0 ){
            ans += i;
        }
    }
    */
    int t3 = (3 + 999) * 333 / 2;
    int t5 = (5 + 995) * 199 / 2;
    int t15 = (15 + 990) * 66 / 2;
    cout << t3 + t5 - t15 << endl;
    return 0;
}
