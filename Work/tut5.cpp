#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int a = 0;

    cout <<setw(5) <<a <<endl;
    cout <<setw(4) <<a <<setw(2) <<a <<endl;
    cout <<setw(3) <<a <<setw(2) <<a <<setw(2) <<a <<endl;
    cout <<setw(2) <<a <<setw(2) <<a <<setw(2) <<a <<setw(2) <<a <<endl;
    cout <<setw(1) <<a <<setw(2) <<a <<setw(2) <<a <<setw(2) <<a <<setw(2) <<a <<endl;

    return 0;
}