/*************************************************************************
	> File Name: qz.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 06 Oct 2021 02:21:31 PM CST
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;

char q[105], z[105]; // record preorder and middle order binary tree

void func(int ql, int qr, int zl, int zr) {
    if (ql > qr) {
        return ;
    }
    // sub tree just has one node
    if (ql == qr) {
        cout << q[ql];
        return ;
    }
    // find root node in mid-order sequence
    char root = q[ql];
    int ind = zl;
    while (z[ind] != root) {
        ind++;
    }
    func(ql + 1, ql + ind - zl, zl, ind - 1);
    func(ql + ind - zl + 1, qr, ind + 1, zr);
    cout << root;
}

int main(){
    cin >> q >> z;
    func(0, strlen(q) - 1, 0, strlen(z) - 1);   
    cout << endl;
    return 0;
}
