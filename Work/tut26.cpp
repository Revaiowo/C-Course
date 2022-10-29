#include<iostream>
#include<cmath>

class Point{

int x, y;
friend void Distance(Point o1, Point o2); 
public:


Point(int a, int b){
    x = a;
    y = b;
}

// void Data(int v1, int v2){
//         x = v1;
//         y = v2;
//     }

// void Print(){
//     std::cout <<"The distance is " <<sqrt(x + y);
//  }
};

void Distance(Point o1, Point o2){
    int distance = (o2.x - o1.x)*(o2.x - o1.x) + (o2.y - o1.y)*(o2.y - o1.y);
   
    std::cout <<"The distance is " <<sqrt(distance);
}


int main(){

// Point P, Q, R;

// P.Data(1,2);
// Q.Data(4,6);

// R.Distance(P, Q);

Point P(1,2);
Point Q(4,6);

Distance(P,Q);

return 0;
}