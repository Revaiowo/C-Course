#include <iostream>

class Test{
    int x, y;

public:
    Test(int i, int j) : x(i), y(j){

        std::cout << "Value of x is " << x << std::endl;
        std::cout << "Value of y is " << y << std::endl;
    }
};

int main(){

    // Test t(100, 200);

    int a[] = {4, 3, 2, 1};

    int *prt = a; 

    std::cout << "Value of a is " << *prt << std::endl;
    std::cout << "Value of a is " << *(prt+1) << std::endl;

    // int *p = new int(40);

    // std::cout << "Value of p is " << *p << std::endl;

    // int *arr = new int[3];

    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;

    // std::cout << "Value of arr[0] is " << arr[0] << std::endl;
    // std::cout << "Value of arr[1] is " << arr[1] << std::endl;
    // std::cout << "Value of arr[2] is " << arr[2] << std::endl;
 }
