#include<iostream>

class Numbers;

class Calculator{

    public:

    int Sum(Numbers, Numbers);
    
};

class Numbers{

    int a;
    int b;
    
    // friend class Calculator; // to give permission to every function of class Calculator

    friend int Calculator::Sum(Numbers, Numbers);

    public:

    void Data(int v1, int v2){
        a = v1;
        b = v2;
    }
};

int Calculator::Sum(Numbers o1, Numbers o2){
    return o1.a + o2.b;
    
}

int main(){

    Numbers num1;

    num1.Data(7, 2);
   

    Calculator calc;

    int res = calc.Sum(num1, num1);
  
    std::cout <<"The sum of two numbers is " <<res;

    return 0;
}