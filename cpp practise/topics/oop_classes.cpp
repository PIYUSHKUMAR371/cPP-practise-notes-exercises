#include<iostream>

class Human{
    public:
        std::string name ="MORTY";
        std::string occupation ="CRAZY";
        int age =100;

        void eat(){
            std::cout<<"this person is eating\n";
        }
        void drink(){
            std::cout<<"this person is drinking\n";
        }
        void sleep(){
            std::cout<<"this person is sleaping\n";
        }
};

int main(){
    Human human1;
    human1.name ="morty";
    human1.occupation ="sidekick";
    human1.age =16;

    std::cout<<human1.name<<'\n';
    std::cout<<human1.occupation<<'\n';
    std::cout<<human1.age<<'\n';

    human1.eat();
    human1.drink();
    human1.sleep();

    return 0;
}