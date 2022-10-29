#include<iostream>
#include<map>
#include<string>

void Display(std::map<std::string, int> &map1){

    std::map<std::string, int> :: iterator it;

        for(it = map1.begin(); it != map1.end(); it++){
            std::cout <<(*it).first <<" " <<(*it).second <<std::endl;
        }
}

int main(){

    std::map<std::string, int> mapMarks;

    mapMarks["Maths"] = 96;
    mapMarks["Physics"] = 94;
    mapMarks["chemistery"] = 90;

    Display(mapMarks);

    return 0;
}