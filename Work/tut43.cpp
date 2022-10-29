#include<iostream>
#include<vector>

void Display(std::vector<int> &v){
    std::vector<int> :: iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        std::cout <<*it <<" ";
    }
}

int main(){

    int size, element;
    
    std::cout << "Enter the size of vector " <<std::endl;
    std::cin >>size;

    std::vector<int> vec1;
    // std::vector<int> vec2(600, 7);

    // vec2.push_back();

    // Display(vec2);

    for (int i = 0; i < size; i++){
        std::cout << "Enter the elements of vector " <<std::endl;
        std::cin >>element;
        vec1.push_back(element);
    }
    
    std::cout <<"The elements are : ";

    std::vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter, 5, 4); 
    Display(vec1); 


    // vec.push_back(3);
    // Display(vec);

// Alternate method where we do not need to call Display()

    // std::vector<int> vec;

    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);

    // std::vector<int> :: iterator it;
    // it = vec.begin();

    // std::cout <<*it;

    return 0;
}