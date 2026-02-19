#include<iostream>

int main(){
    std::string name;

    while(name.empty()){
        std::cout<<"enter your ";
        std::getline(std::cin,name);
        std::cout<<"hello "<<name;
    }
    return 0;
}