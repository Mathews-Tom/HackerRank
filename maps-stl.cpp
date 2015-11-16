#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    std::map<string, int> m;
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        int x, y;
        string z;
        cin >> x;
        if (x == 1) {
            cin >> z >> y;
            map<string,int>::iterator itr = m.find(z);
            if (itr != m.end()) {
                itr->second += y;
            }
            else {
                m.insert(make_pair(z,y));
            }
        }
        else if (x == 2) {
            cin >> z;
            map<string,int>::iterator itr = m.find(z);
            if (itr != m.end()) {
                m.erase(z);
            }
        }
        else if (x == 3) {
            cin >> z;
            map<string,int>::iterator itr = m.find(z);
            if (itr != m.end()) {
                cout << itr->second << endl;
            }
            else {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}
