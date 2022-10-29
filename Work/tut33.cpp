#include<iostream>
#include<cmath>

class simpleCalculator{
protected:
    float a, b;
    char c;
public:

    void get_Value1(){
        
        std::cout <<"Enter two integers ";
        std::cin >>a >>b;

        std::cout <<"Enter an Operator such as '+' '-' '*' '/' :";
        std::cin >>c;
    }
    void DIsplay_simpleCalc(){
        switch(c){
            case '+' : {
                std::cout <<"Addition of " <<a <<" and " <<b <<" is " <<a+b <<std::endl;
                break;
            }
            case '-' : {
                std::cout <<"Substraction of " <<a <<" and " <<b <<" is " <<a-b <<std::endl;
                break;
            }
            case '*' : {
                std::cout <<"Mulltiplaction of " <<a <<" and " <<b <<" is " <<a*b <<std::endl;
                break;
            }
            case '/' : {
                std::cout <<"Division of " <<a <<" and " <<b <<" is " <<a/b <<std::endl;
                break;
            }
            default : {
                std::cout <<"Invalid Operator!";
            }
        }
    }   
};

class scientificCalculator{
protected:
    float value;
    int num;

public:

    void get_Value2(){
        
        std::cout <<"Input the respective value of the operation that you want to perform : " <<std::endl;
        std::cout <<"Square root -----> 1" <<std::endl;
        std::cout <<"Value of Sinx ---> 2" <<std::endl;
        std::cout <<"Value of cosx ---> 3" <<std::endl;
        std::cout <<"Value of tanx ---> 4" <<std::endl;

        std::cin >>num;
        
    }

    void DIsplay_scientificCalc(){

        switch(num){
            
            case 1 :
                std::cout <<"Enter an integer to find its square root" <<std::endl;
                std::cin >>value;
                std::cout <<"Square root of " <<value <<" is " <<sqrt(value);
                break;

            case 2 :
                std::cout <<"Enter an angle to find its sinx ";
                std::cin >>value;
                std::cout <<"The value of sin(" <<value <<") is " <<sin(value * (3.141 / 180));
                break;

            case 3 :
                std::cout <<"Enter an angle to find its cosx ";
                std::cin >>value;
                std::cout <<"The value of cos(" <<value <<") is " <<cos(value * (3.141 / 180));
                break;
            case 4 :
                std::cout <<"Enter an angle to find its tanx ";
                std::cin >>value;
                std::cout <<"The value of tan(" <<value <<") is " <<tan(value * (3.141 / 180));
                break;
            
            default :
                std::cout <<"Invalid value!";
        }
    }
};

class hybridCalculator : public simpleCalculator, public scientificCalculator{
    char c;
    public:

    void Choose(){

        std::cout <<"Choose which calculator you want to use : " << std::endl;
        std::cout <<"Simple Calculator --------> 'a' " << std::endl;
        std::cout <<"Scientific Calculator ----> 'b' " << std::endl;
        std::cin >>c;

        switch(c) {

            case 'a' :
                get_Value1();
                DIsplay_simpleCalc();
                break;
            
            case 'b' :
                get_Value2();
                DIsplay_scientificCalc();
                break;

            default :
                std::cout <<"Invalid Operation!";
        }
    }
};

int main(){

   hybridCalculator calc;

   calc.Choose();

    return 0;
}