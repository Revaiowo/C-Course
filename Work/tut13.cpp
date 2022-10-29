#include<iostream>

using namespace std;

int main(){
    
    int marks[4] = {10, 20, 30, 40};

    // cout <<"The value of marks 0 is " <<marks[0] <<endl;
    // cout <<"The value of marks 1 is " <<marks[1] <<endl;
    // cout <<"The value of marks 2 is " <<marks[2] <<endl;
    // cout <<"The value of marks 3 is " <<marks[3] <<endl;

    int i=0;

    // for (i=0; i<4; i++)

    // cout <<"The value of " <<i <<" is " <<marks[i] <<endl;

   // pointers and arrays

     int* p = marks;

    cout <<"The value of *p is " <<*p <<endl;
    cout <<"The value of *(p+1) is " <<*(p+1) <<endl;
    cout <<"The value of *(p+2) is " <<*(p+2) <<endl;
    cout <<"The value of *(p+3) is " <<*(p+3) <<endl;
    return 0;
}