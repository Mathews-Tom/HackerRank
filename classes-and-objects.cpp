#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student{
private:
    int score[5];
public:
    void Input(){
        for (int i=0; i<5; i++) {
            cin >> score[i];
        }
    }
    int CalculateTotalScore() {
        int total_score = 0;
        for (int i=0; i<5; i++) {
            total_score += score[i];
        }
        return total_score;
    }
};

int main() {
   int n;
     cin>>n;
     Student s[n];
     for(int i=0;i<n;i++)
      s[i].Input();
     int count=0;
     int krish_score=s[0].CalculateTotalScore();
     for(int i=1;i<n;i++)
    {
      int total=s[i].CalculateTotalScore();
      if(total>krish_score)
        count++;
    }
     cout<<count;
    return 0;
}