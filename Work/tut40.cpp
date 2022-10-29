#include<iostream>
#include<fstream>
#include<string>

int main(){

    std::string st = "Hello!";
    std::string st2;

    std::ofstream out("sample40.txt");
    out<<st;

    out.close();

    std::ifstream in("sample40.txt");
    in>>st2; //it will only give first world
    // getline(in, st2); // it gives a full line


    std::cout <<st2;

    return 0;
}