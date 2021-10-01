/*************************************************************************
	> File Name: list.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 02 Oct 2021 01:02:08 AM CST
 ************************************************************************/

#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int n, m; // n个点 m条边


int main() {
    cin >> n >> m;
    vector<vector<pair<int, int> > > edg(n + 1, vector<pair<int, int> >{});

    for (int i = 0; i < m; i++) {
        int s, e, v;
        cin >> s >> e >> v;
        edg[s].push_back(make_pair(e, v));
    }

    for (int i = 1; i <= n; i++) {
        cout << i << " : ";
        for (int j = 0; j < edg[i].size(); j++) {
            cout << "{" << edg[i][j].first << ", " << edg[i][j].second << "} ";
        }
        cout << endl;
    }

    return 0;
}
