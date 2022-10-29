#include<iostream>

class Base1{
    protected:
        int intBase1;
    
    public:

    void set_Base1(int a){
        intBase1 = a;
    }

    void get_Base1(){
        std::cout <<"Value of Base1 is " <<intBase1 <<std::endl;
    }
};

class Base2{
    protected:
        int intBase2;
    
    public:

    void set_Base2(int a){
        intBase2 = a;
    }

    void get_Base2(){
        std::cout <<"Value of Base2 is " <<intBase2 <<std::endl;
    }
};

class Derived : public Base1, public Base2{
    public:

    void get_Derived_Data(){
        std::cout <<"Addition of Base1 and Base2 is " <<intBase1+intBase2;
    }

    void Display(){
        get_Base1();
        get_Base2();
        get_Derived_Data();
    }
};

int main(){

    Derived der;

    der.set_Base1(2);
    der.set_Base2(5);

    der.Display();
}   
