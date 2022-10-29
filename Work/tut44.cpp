#include<iostream>
#include<list>

void Display(std::list<int> &lst){
    std::list<int> :: iterator inter;

    for (inter = lst.begin(); inter != lst.end(); inter++)
{
    std::cout <<*inter <<" ";
}
}

int main(){

    std::list<int> list1;
// normal way to store elements - 
    // list1.push_back(3);
    // list1.push_back(4);
    // list1.push_back(5);

// by for loop -
    int size, element, i = 0;

    std::cout <<"Enter the size of list ";
    std::cin >>size;

for (int i = 0; i < size; i++)
{
    std::cout <<"Enter elements ";
    std::cin >>element;

    list1.push_back(element);
}

// normal way to get value - 
    // std::list<int> :: iterator inter;
    // inter = list1.begin();

    // std::cout <<*inter <<" ";
    // inter++;
    // std::cout <<*inter <<" ";
    // inter++;
    // std::cout <<*inter <<" ";

// with for loop -

// std::list<int> :: iterator inter;

// for (inter = list1.begin(); inter != list1.end(); inter++)
// {
//     std::cout <<*inter <<" ";
// }

std::list<int> :: iterator inter;
inter = list1.begin();
list1.insert(inter, 5, 12);

Display(list1);

return 0;
}