#include<iostream>

template <class t1, class t2>

void Sum(t1 a, t2 b){
    int c = a+b;
    std::cout <<c <<std::endl;
}
void Sum(int a, int b){
    int c = a+b;
    std::cout <<c;
}


int main(){
    Sum(1, 2);

    Sum(4,5);

    return 0;
}