#include<iostream>

class pizza{
    public:
        std::string topping1;
        std::string topping2;

    pizza(){
    }    
    pizza(std::string topping1){
        this->topping1=topping1;
    }   
    
    pizza(std::string topping1,std::string topping2){
    this->topping1=topping1;
    this->topping2=topping2;
    }

};

int main(){
    pizza pizza1("pepperoni");
    pizza pizza2("cheese","mushrooms");
    pizza pizza3();

    std::cout<<pizza1.topping1<<'\n';
    std::cout<<pizza2.topping1<<'\n';
    std::cout<<pizza2.topping2<<'\n';
    return 0;
}