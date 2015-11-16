#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N, Q;
    vector<int> X, Y;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        X.push_back(temp);
    }
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        int temp;
        cin >> temp;
        Y.push_back(temp);
    }
    for (int i = 0; i < Q; i++) {
        int dist;
        std::vector<int>::iterator low;
        low = lower_bound(X.begin(), X.end(), Y[i]);
        dist = low - X.begin();
        if  (X[dist] == Y[i]) {
            cout << "Yes " << (dist + 1) << endl;
        }
        else {
            cout << "No " << (dist + 1) << endl;
        }
    }
    return 0;
}
