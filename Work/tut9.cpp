#include<iostream>

using namespace std;

int main()
{

    int age;

    cout <<"what is your age?" <<endl;
    cin >>age;
    
    switch (age)
    {
    case 18:
    cout <<"Welcome dear.";
    break;

     case 35:
    cout <<"No entry for you lol";
    break;

    default:

    cout <<"Get the hell out";
    }
    
    return 0;
}