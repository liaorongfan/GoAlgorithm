/*************************************************************************
	> File Name: 1.queue.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 10 Apr 2021 08:03:30 PM CST
 ************************************************************************/

#include<iostream>
#include<queue>
using namespace std;

struct node {
    int x;
    int y;
};


int main() {

    /*
    queue<int> que;
    for (int i = 9; i > 4; i--) {
        que.push(i);
    }
    while (!que.empty()) {
        cout << "que.front() = " << que.front() << "\tque.size() = " << que.size() << endl;
        que.pop();
    }
    */
    queue<node> que; 
    node a;
    a.x = a.y = 6;
    que.push(a);
    que.push((node){7, 8}); // 默认使用构造函数
    cout << que.front().x << endl; // 6
    que.pop();
    node temp = que.front();
    cout << temp.x << " " << temp.y << endl; // 7 8
    return 0;
}

