/*************************************************************************
	> File Name: bellman-ford_v2.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 04 Oct 2021 01:50:08 AM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

struct edge {
    int s, e, v;
};

int n, m, s, edg_cnt , ans[100005];
edge edg[2000005];

void add_edg(int a, int b, int c) {
    edg[edg_cnt].s = a; 
    edg[edg_cnt].e = b;
    edg[edg_cnt].v = c;
    edg_cnt++;
}

int main() {
    memset(ans, 0x3f, sizeof(ans));
    scanf("%d%d%d", &n, &m, &s);
    for (int i = 0; i < m; i++) {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        add_edg(a, b, c);
        add_edg(b, a, c);
    }
    ans[s] = 0;
    
    for (int i = 0; i <= n; i++) {
        int f = 0;
        for(int j = 0; j < edg_cnt; j++) {
            //ans[edg[j].e] = min(ans[edg[j].e], ans[edg[j].s] + edg[j].v);
            if (ans[edg[j].e] > ans[edg[j].s] + edg[j].v) {
                ans[edg[j].e] = ans[edg[j].s] + edg[j].v;
                f = 1;
            }
        }
        if (f == 0) {
            break;
        }
    }

    for (int i = 1; i <= n; i++) {
        if (ans[i] != 0x3f3f3f3f) {
            printf("%d\n", ans[i]);
        } else {
            printf("-1\n");
        }
    }



    return 0;
}
