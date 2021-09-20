/*************************************************************************
	> File Name: 4.euler_8.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 09 Jan 2021 03:53:47 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

char num[1005];
//全局变量自动初始化为0
long long ans, zero_cnt, now = 1;

int main() {
    cin >> num;
    for (int i = 0; i < 1000; i++) {
        if (i < 13) {
            //滑动窗口大小为13 ，前13个元素直接乘进去
            now *= num[i] - '0'; // 将字符转成整型数据
        } else {
            if (num[i] == 0) {
                //如果下一个元素为0，则记录窗口中0的个数
                zero_cnt++;
            } else {
                now *= num[i] - '0';
            }
            if (num[i - 13] == '0'){
                zero_cnt--;
            } else {
                now /= num[i - 13] - '0';
            }
        }
        if (zero_cnt == 0) {
            ans = max(ans, now);
        }
    }
    cout << ans << endl;
    return 0;

}
