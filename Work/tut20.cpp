#include<iostream>

class numbers{

int num;

    public:

    void Data(int n){
        num = n;
    }

    void Sum(numbers n1, numbers n2){
        num = n1.num + n2.num; 
        
    }
    void Print1(){
        std::cout <<"Value of number 1 is " <<num <<std::endl;
    }
    void Print2(){
        std::cout <<"Value of number 2 is " <<num <<std::endl;
    }
    void Print3(){
        std::cout <<"Sum of above 2 numbers is " <<num <<std::endl;
    }
};

int main(){

    numbers num1, num2, num3;

    num1.Data(2);
    num1.Print1();

    num2.Data(3);
    num2.Print2();

    num3.Sum(num1, num2);
    num3.Print3();

    return 0;
}