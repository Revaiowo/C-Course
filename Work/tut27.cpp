// FUNCTIONS

#include<iostream>

int Sum(int, int);
int Sub(int, int);
void Greeting();

int main(){

    int a, b;

    std::cout <<"Enter two integers " <<std::endl;
    std::cin >>a >>b;
    
    std::cout <<"Sum of " <<a <<" and " <<b <<" is " <<Sum(a,b) <<std::endl;
    std::cout <<"Substraction of " <<a <<" and " <<b <<" is " <<Sub(a,b) <<std::endl;

    Greeting();

    return 0;
}
int Sum(int x, int y){
    return x+y;
}
int Sub(int x, int y){
    return x-y;
}

void Greeting(){
    std::cout <<"Hello World!" <<std::endl;
}