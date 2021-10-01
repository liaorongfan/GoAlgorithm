/*************************************************************************
	> File Name: star.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 02 Oct 2021 01:40:22 AM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;


struct edge {
    int e, v, next;
};

edge edg[100005];
int n, m, head[100005];

int main() {
    memset(head, -1, sizeof(head));
    cin >> n >> m;
    
    for (int i = 0; i < m; i++) {
        int s, e, v;
        cin >> s >> e >> v;
        edg[i].e = e;
        edg[i].v = v;
        edg[i].next = head[s];
        head[s] = i;
    }

    for (int i = 0; i <= n; i++) {
        cout << i << " : ";
        for (int j = head[i]; j != -1; j = edg[j].next) {
            cout << "{" << edg[j].e << ", " << edg[j].v << "} ";
        }
        cout << endl;
    }

    return 0;
}
