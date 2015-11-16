#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin>>N;
    int A[N];
    for (int x=0; x<=N; x++){
        cin>>A[x];
    }
    for (int x=(N-1); x>=0; x--){
        cout<<A[x];
        cout<<" ";
    }
    return 0;
}
