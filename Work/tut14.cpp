#include<iostream>

using namespace std;

int sum(int, int);
int multiply(int, int);
void greeting();

int main(){
    
    int num1, num2, num3, num4;

    cout <<"Enter two numbers ";
    cin >>num1 >>num2;

    cout <<"The sum of the numbers is " <<sum(num1, num2) <<endl; 

    cout <<"Enter two numbers ";
    cin >>num3 >>num4;
  
    cout <<"The multiplication of the numbers is " <<multiply(num3, num4);

    greeting();

    return 0;
}

// This is a Funciton -

int sum(int a, int b){
    int c = a+b;
    return c;
}

int multiply(int p, int q){
    int r = p*q;
    return r;
}

void greeting(){
    cout <<"\nThanks for the code";
    }