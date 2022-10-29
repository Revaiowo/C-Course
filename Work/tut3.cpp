#include<iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    
    cout << "Enter the value of number 1: ";
    cin >> num1;

    cout << "Enter the value of number 2: ";
    cin >> num2;
    
    cout << "Enter the value of number 3: ";
    cin >> num3;
    
    int a= num1 + num2 + num3;

    cout << "\nTotal sum of the numbers is " <<a;

    return 0;
}