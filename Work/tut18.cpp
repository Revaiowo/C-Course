#include<iostream>

using namespace std;

class Animals{
    
    int dog;

public:

void setData(int dog);
void getData(){

    cout <<"A dog rotates " <<dog <<" times" <<endl;
    // cout <<"A cat's voice is like " <<cat <<endl;
}
};

void Animals::setData(int dog1){

    dog = dog1;
    }

int main(){
    
    Animals tommy;

    tommy.setData(2);
    tommy.getData();
    return 0;
}