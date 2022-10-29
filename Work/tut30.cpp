#include<iostream>

class Base{
    int a;
protected:
    int b=1;
};
 
class Derived : protected Base{
    
    public:          
    void Print(){
        std::cout <<b;
    }
};

int main(){ 

    Derived der;
    der.Print();

    return 0;
}