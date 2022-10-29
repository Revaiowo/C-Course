#include<iostream>

using namespace std;


// Call by reference using pointers -
// void swapPointer(int* a, int* b){

//                         //temp a b

//     int temp = *a;      //4    4 5
//         *a = *b;        //4    5 5
//         *b = temp;      //4    5 4

// Call by reference using C++ reffrence variable -

// int &
void swapRefrenceVar(int &a, int &b){

                       //temp a b

    int temp = a;      //4    4 5
        a = b;         //4    5 5
        b = temp;      //4    5 4

    // return a;
}

int main(){

    int x=1, y=2;
  
    cout <<x <<y <<endl;
    
    // swapPointer(&x, &y); // This will swap a and b using pointer refrence
    swapRefrenceVar(x, y); // this will swap a and b using refrence variable
    
    // swapRefrenceVar(x, y) = 734; // a will become 734
    
        cout <<x <<y;

    return 0;
}