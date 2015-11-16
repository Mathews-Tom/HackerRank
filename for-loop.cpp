#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a, b;
    cin >> a >> b;
    for (int x=a; x<=b; x++) {
        if (x>=1 & x<=9) {
            if (x==1) {
                cout << "one";
            }
            else if (x==2) {
                cout << "two";
            }
            else if (x==3) {
                cout << "three";
            }
            else if (x==4) {
                cout << "four";
            }
            else if (x==5) {
                cout << "five";
            }
            else if (x==6) {
                cout << "six";
            }
            else if (x==7) {
                cout << "seven";
            }
            else if (x==8) {
                cout << "eight";
            }
            else {
                cout << "nine";
            }
        }
        else if (x>9) {
            if (x % 2) {
                cout << "odd";
            }
            else {
                cout << "even";
            }
        }
        cout << "\n";
    }
    return 0;
}
