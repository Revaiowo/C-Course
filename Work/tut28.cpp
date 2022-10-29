// CONSTRUCTOR IN DERIVED CLASSES

#include<iostream>

class Employee{

    public:
    int Id;
    float Salary;

    Employee();
    Employee(int numId){
        Id = numId;
    }

    void Print(){
        std::cout <<"Id number : " <<Id <<std::endl;
    }
};

class Programmer : public Employee{
    public:
    Programmer();
    Programmer(float numSalary){
        Salary = numSalary;
    }

    void Print1(){
        std::cout <<"Salary :" <<Salary;
    }
};

int main(){

    Employee E1(1);
    E1.Print();

    Programmer E2(50000);
    E2.Print1();

    return 0;
}