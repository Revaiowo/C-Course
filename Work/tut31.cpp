#include<iostream>

class Students{

    protected:
        int roll_number;
    public:

    void set_roll_number(int a){
        roll_number = a;
    }

    void get_roll_number(){
        std::cout <<"The roll number of the student is " <<roll_number <<std::endl; 
    }
};

class Marks : public Students{
    protected:
        int physics;
        int maths;
    public:

    void set_marks(float m1, float m2){
        physics = m1;
        maths = m2;
    }

    void get_marks(){
        std::cout <<"The marks of the student in physics is " <<physics <<std::endl;
        std::cout <<"The marks of the student in maths is " <<maths <<std::endl;
    }
};

class Result : public Marks{
    
    public:

    void get_percentage(){
        std::cout <<"The percentage of the student is " <<(physics+maths)/2 <<std::endl;
    }

    void Display(){
        get_roll_number();
        get_marks();
        get_percentage();
    }
};

int main(){

    Result aditya;

    aditya.set_roll_number(21);
    aditya.set_marks(90, 92);
    
    aditya.Display();

    return 0;
}