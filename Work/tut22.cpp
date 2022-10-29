#include<iostream>

class numbers{
    int a;

    public:

    void Data(int v){
        a = v;
    }
    
    friend numbers Sum(numbers o1, numbers o2);
    
    void Print(){
        std::cout <<"Sum of the numbers is " <<a;
    }
};

numbers Sum(numbers o1, numbers o2){
    numbers o3;
    o3.Data(o1.a + o2.a);
    return o3;
}

int main(){

    numbers num1, num2, num3;

    num1.Data(1);
    num2.Data(2);

    num3 = Sum(num1, num2);
    num3.Print();

    return 0;
}
