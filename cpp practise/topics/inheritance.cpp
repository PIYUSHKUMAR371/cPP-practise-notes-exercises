#include<iostream>

class animal{
    public:
       bool alive = true;
    void eat(){
        std::cout<<"this animal is eating\n";
    }
};
class dog : public animal{
    public:
    void bark(){
        std::cout<<"the dog goes woof\n";
    }
};

int main(){
    dog dog;
    std::cout<<dog.alive<<'\n';
    dog.eat();
    dog.bark();

    return 0;
}