#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int> st;
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        int x, y;
        cin >> x >> y;
        if (x == 1) {
            st.insert(y);
        }
        else if (x == 2) {
            set<int>::iterator itr = st.find(y);
            if (itr != st.end()) {
                st.erase(y);
            }
        }
        else if (x == 3) {
            set<int>::iterator itr = st.find(y);
            if (itr != st.end()) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
