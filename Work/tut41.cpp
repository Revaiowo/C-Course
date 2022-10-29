#include<iostream>

template <class T1, class T2>

class Base{
public:
    T1 data1;
    T2 data2;
    public:
    Base(T1 a, T2 b){
        data1 = a;
        data2 = b;
    }

    void Display(){
        std::cout <<data1 <<std::endl <<data2;
    }
};

int main(){

    Base<int, std::string> obj(1,"ayo buddy");

    obj.Display();
    
    return 0;
}