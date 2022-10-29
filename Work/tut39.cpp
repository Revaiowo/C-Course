#include<iostream>
#include<string>

class Weeb{
    protected:
        std::string fav_anime;
        std::string fav_manga;
    public:

        Weeb(std::string a, std::string b){
            fav_anime = a;
            fav_manga = b;
        }

        virtual void Display(){}
};

class Anime : public Weeb{
    int anime_count;

    public:

        Anime(std::string a, std::string b, int ac) : Weeb(a, b){
            anime_count = ac;
        }

        void Display(){
            std::cout <<"Number of anime watched : " <<anime_count <<std::endl;
            std::cout <<"My favourite anime is " <<fav_anime <<std::endl;
        }
};

class Manga : public Weeb{
    int manga_count;

    public:

        Manga(std::string a, std::string b, int mc) : Weeb(a, b){
            manga_count = mc;
        }

        void Display(){
            std::cout <<"Number of manga read : " <<manga_count <<std::endl;
            std::cout <<"My favourite manga is " <<fav_manga <<std::endl;
        }
};

int main(){

    Anime obj_anime("Golden Kamuy", "JJBA part 7", 180);
    Manga obj_manga("Golden Kamuy", "JJBA part 7", 50);

    Weeb *ptr[2];

    ptr[0] = &obj_anime;
    ptr[1] = &obj_manga;

    ptr[0]->Display();
    ptr[1]->Display();

    return 0;
}