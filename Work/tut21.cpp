#include<iostream>

class complex{
    int a,b;

    public:

    void Data(int v1, int v2){
        a = v1;
        b = v2;
    }
    void Sum(complex o1, complex o2);
    
    void Print(){
        std::cout <<"The complex number is " <<a <<" + " <<b <<"i";
    }
};
void complex::Sum(complex o1, complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

int main(){

    complex c1, c2, c3;

    c1.Data(2,3);
    
    c2.Data(4,6);

    c3.Sum(c1,c2);
    c3.Print();

    return 0;
}

