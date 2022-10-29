#include<iostream>

using namespace std;

int main()

{
    int age;

    cout <<"What is your age?" <<endl;
    cin >>age;

    if(age<1){
        cout <<"You aren't even born yet.";

    }
    if((age<18) && (age>0)){
        cout <<"Entry not allowed!";   
    }

   if(age==18){
    cout << "Please make your way in.";
   }

    if((age>18) && (age<100)){
    cout <<"Please enter in.";
    }

    if(age>=100){
        cout <<"You have crossed the age limit.";
    }

    return 0;
}