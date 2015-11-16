#include <iostream>
#include <string>
using namespace std;

int main() {
    // Complete the program
    string s1, s2;
    char t;
    int a, b;
    cin>>s1>>s2;
    a = s1.size();
    b = s2.size();
    cout<<a<<" "<<b;
    cout<<"\n";
    cout<<(s1+s2);
    t = s2[0];
    s2[0] = s1[0];
    s1[0] = t;
    cout<<"\n";
    cout<<s1<<" "<<s2;
    return 0;
}
