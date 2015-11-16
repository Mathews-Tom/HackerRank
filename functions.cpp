#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d) {
    int m;
    if (a>=b & a>=c & a>=d) {
        m=a;
    }
    else if (b>=c & b>=d) {
        m=b;
    }
    else if (c>=d) {
        m=c;
    }
    else {
        m=d;
    }
    return m;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

