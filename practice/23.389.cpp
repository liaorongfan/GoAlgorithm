/*************************************************************************
	> File Name: 23.389.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 10 Apr 2021 06:14:33 PM CST
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;

int n, m, num[100005], tr;

int func(int d) {
    int s = 1, last = num[0];
    for (int i = 1; i < n; i++) {
        if (num[i] - last >= d) {
            s++;
            last = num[i];
        }
    }
    return s;
}


int main(){
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
        tr = max(tr, num[i]);
    }

    sort(num, num + n);

    int l = 1, r = tr;
    while(l != r) {
        int mid = (l + r + 1) / 2;
        int s = func(mid);
        if (s >= m) {
            l = mid;
        } else {
            r = mid - 1;
        }
    }
    
    cout << l << endl;

    return 0;
}
