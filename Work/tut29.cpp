#include<iostream>

class Base{
    int Data1;
    int Data2;
public:

    void setData();
    int Print1();
    int Print2();
};

void Base::setData(){
    std::cout <<"Enter the value of Data1 and Data2 :";
    std::cin >>Data1 >>Data2;
}
int Base::Print1(){
    return Data1;
}
int Base::Print2(){
    return Data2;
}

class Derived : public Base{
    int Data3;
public:
    int Multiply();
    void finalPrint();
};

int Derived::Multiply(){
    return Data3 = Print1() * Print2();
}
void Derived::finalPrint(){
    std::cout <<"Value of Data1 : " <<Print1() <<std::endl;
    std::cout <<"Value of Data2 : " <<Print2() <<std::endl;
    std::cout <<"Value of Data3 : " <<Data3;
}

int main(){
    Derived der;

    der.setData();
    der.Multiply();
    der.finalPrint();

    return 0;
}