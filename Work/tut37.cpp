#include<iostream>

class Shop{
    int Id, Price;

    public:

        void setData(int Id, int Price){
            this->Id = Id;
            this->Price = Price;
        }

        void getData(){
            std::cout <<" Id  : " <<Id <<std::endl;
            std::cout <<" Price  : " <<Price <<std::endl;
        }
};

int main(){
    int size = 3;

    // Shop o1, o2, o3; 

    Shop *ptr = new Shop [size];
    Shop *ptrTemp = ptr;

    int p, q;

    for (int i = 0; i < size; i++)
    {
        std::cout <<"Enter the Id and Price of items " <<std::endl;
        std::cin >>p >>q;
        
        ptr->setData(p, q);
        ptr++;  
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << "The Id and Price of item " <<i+1 <<"--->" <<std::endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}