#include<iostream>

void bake();
void bake(std::string topping1,std::string topping2);

int main(){
    bake("pepperoni","mushrooms");

    return 0;
}

void bake(){
    std::cout<<"here is your pizza\n";
}
void bake(std::string topping1){
    std::cout<<"here is your"<<topping1<<"pizza\n";
}
void bake(std::string topping1, std::string topping2){
    std::cout<<"here is your"<<topping1<<"and"<< topping2 <<"pizza\n";
}