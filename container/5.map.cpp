/*************************************************************************
	> File Name: 5.map.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 10 Apr 2021 09:34:34 PM CST
 ************************************************************************/

#include<iostream>
#include<map>
#include<string>
using namespace std;

struct node {
    int x;
    int y;
    
    bool operator< (const node &b) const {
        return this-> x > b.x;
    }
};


int main() {
    /*
    map<string, int> m;
    string a = "123";
    m[a] = 11223;
    cout << m["123"] << endl;
    cout << m[a] << endl;
    cout << m["222"] << endl;
    */

    map<node, int> m;
    node a;
    m[a] = 5;


    return 0;
}

