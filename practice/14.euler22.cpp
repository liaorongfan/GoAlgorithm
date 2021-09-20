/*************************************************************************
	> File Name: 14.euler22.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 08 Apr 2021 12:50:28 AM CST
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    int n = 0;
    string name[6005];
    while (cin >> name[n]) {
        n++;
    }
    sort(name, name + n);
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        int t = 0;
        for (int j = 0; j < name[i].size(); j++) {
            t += name[i][j] - 'A' + 1;
        }
        ans += t * (i + 1);

    }
    cout << ans << endl;
    return 0;
} 

