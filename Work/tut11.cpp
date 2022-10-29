#include<iostream>

using namespace std;

int main()
{
int a, b, c;

cout << "Which number's table do you want?: ";
cin >> a;

for (b=1; b<=10; b++){
     
     int c = a*b;

     cout <<c <<endl;
     }
    return 0;
}