/*************************************************************************
	> File Name: 27.oj-479.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 24 Sep 2021 12:34:51 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int a11[6000][2], a21[6000][2], ind1, ind2;

void p() {
    for (int i = 0; i <= ind1; i++) {
        cout << a11[i][0] << ":" << a11[i][1] << endl;
    }
    cout << endl;
    for (int i = 0; i <= ind2; i++) {
        cout << a21[i][0] << ":" << a21[i][1] << endl;
    }
}

int main() {
    char s[30];
    while (cin >> s) {
        for (int i = 0; s[i]; i++) {
            if (s[i] == 'E') {
                p();
                return 0;
            }
            if (s[i] == 'W') {
                a11[ind1][0]++;
                a21[ind2][0]++;
            } else {
                a11[ind1][1]++;
                a21[ind2][1]++;
            }
            if ((a11[ind1][0] >= 11 || a11[ind1][1] >= 11) && abs(a11[ind1][0] - a11[ind1][1]) >= 2) {
                ind1++;
            }
            if ((a21[ind2][0] >= 21 || a21[ind2][1] >= 21) && abs(a21[ind2][0] - a21[ind2][1]) >= 2) {
                ind2++;
            }
        }
    }

    return 0;
}
