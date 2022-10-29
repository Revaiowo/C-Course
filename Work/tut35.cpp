#include<iostream>

class Base1{
    protected:
        int Data1;
    public:

        Base1(int a){
            Data1 = a;
            std::cout <<"Base1 class was caalled!" <<std::endl;
        }

        void set_Data1(){
            std::cout <<"The value of Data1 is " <<Data1 <<std::endl;
        }
};
class Base2{
    protected:
        int Data2;
    public:

        Base2(int a){
            Data2 = a;
            std::cout <<"Base2 class was caalled!" <<std::endl;
        }

        void set_Data2(){
            std::cout <<"The value of Data2 is " <<Data2 <<std::endl;
        }
};

class Derived : public Base1, public Base2{

    public:

    Derived(int a, int b) : Base1(a), Base2(b){
        std::cout <<"Derived class was called" <<std::endl;
    }
};

int main(){

    Derived der(1,2);

    der.set_Data1();
    der.set_Data2();

    return 0;
}