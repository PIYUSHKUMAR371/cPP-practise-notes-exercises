#include<iostream>

int main(){
    std::string name;

    std::cout<<"enter your name";
    std::getline(std::cin,name);

    if(name.length()>12){
        std::cout<<"not valid";
    }
    else{
        std::cout<<"welcome"<<name;
    }
    return 0;
}