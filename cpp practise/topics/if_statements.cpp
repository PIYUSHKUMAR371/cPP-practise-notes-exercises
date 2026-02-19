#include<iostream>

int main(){
    int age;
    std::cout<<"enter your age";
    std::cin>>age;
    if(age>=18){
        std::cout<<"welcome to the site";
    }
    else if(age<0){
        std::cout<<"you are not born yet!";
    }
    else if(age>=100){
        std::cout<<"you are too old to enter this side";
    }
    else{
        std::cout<<"you are not old enough to enter!";
    }
    return 0;
}