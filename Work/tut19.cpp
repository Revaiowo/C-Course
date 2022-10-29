#include<iostream>

class Employee{

    int Id;
    int Salary;

    public:

    void Print1(){
        std::cout <<"Enter Id of the Employee "<<std::endl;
        std::cin >>Id;}

    void Print2(){
        std::cout <<"The Id of the Employee is " <<Id <<std::endl;
    }
};

int main(){

    Employee Google[4];

        for (int i=0; i<4; i++){
            Google[i].Print1();
            Google[i].Print2();
        }

    return 0;
}