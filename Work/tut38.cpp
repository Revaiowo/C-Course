#include<iostream>

class Base{
    public:
        int var_base;

        virtual void Display(){
            std::cout <<"The vale of var_base is " <<var_base <<std::endl;
        }
};

class Derived : public Base {
    public:
        int var_derived = 5;

        void Display(){
            std::cout <<"The vale of var_derived is " <<var_derived <<std::endl;
        }
};

int main(){

    Base *Base_ptr;
    Base obj_base;

    Derived obj_derived;

    Base_ptr = &obj_derived;

    Base_ptr->Display();

    return 0;
}