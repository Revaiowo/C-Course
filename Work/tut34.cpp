#include<iostream>

class Student{
    protected:
        int roll_number;
    public:

        void set_rollnumber(int a){
            roll_number = a;
        }

        void get_rollnumber(){
            std::cout <<"Roll Number: " <<roll_number <<std::endl;
        }
};

class Test : virtual public Student{
    protected:
    float maths, physics;
    public:

        void set_marks(float a, float b){
            maths = a;
            physics = b;
        }

        void  get_marks(){
            std::cout <<"Value of Maths: " <<maths <<std::endl;
            std::cout <<"Value of physics: " <<physics <<std::endl;
        }
};

class Sports : virtual public Student{
    protected:
        int score;
    public:

        
        void set_score(int a){
            score = a;
        }

        void get_score(){
            std::cout <<"The score in sports is " <<score <<std::endl;
        }
};

class Result : public Test, public Sports{
    float result;
        public:

            void get_result(){
                result = physics + maths + score;
                std::cout <<"Your final result is " <<result <<std::endl;
            }

            void Display(){
                get_rollnumber();
                get_marks();
                get_score();
                get_result();
            }
};

int main(){

    Result aditya;

    aditya.set_rollnumber(001);
    aditya.set_marks(94.0, 83.5);
    aditya.set_score(6);

    aditya.Display();
}
