/*************************************************************************
	> File Name: 6.euler_11.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 09 Jan 2021 05:28:36 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int dirx[4] = {0, 1, 1, 1};
int diry[4] = {1, 1, 0, -1};
int num[30][30], ans;

int main() {
    //读入数据从num[5][5]开始到num[25][25]
    //外围补0
    for (int i = 5; i < 25; i++) {
        for (int j = 5; j < 25; j++) {
            cin >> num[i][j];
        }
    }
    //计算每个点在4个方向，相邻4个元素的和
    for (int i = 5; i < 25; i++) {
        for (int j = 5; j < 25; j++) {
            //循环4个方向
            for (int k = 0; k < 4; k++) {
                //方阵中的每个点
                int t = num[i][j];
                //循环相乘4个相邻元素
                for (int l = 1; l < 4; l++) {
                    int x = i + dirx[k] * l;
                    int y = j + diry[k] * l;
                    t *= num[x][y];
                }
                //更新当前点的最大值
                ans = max(ans, t);
            }
        }
    }
    cout << ans << endl;
    return 0;
}

