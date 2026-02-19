#include<iostream>

int main(){
    int month;
    std::cout<<"enter the month (1-12);";
    std::cin>>month;

    switch(month){
        case 1:
        std::cout<<"it is january";
        break;
        case 2:
        std::cout<<"it is feb";
        break;
        case 3:
        std::cout<<"it is march";
        break;
        case 4:
        std::cout<<"it is apr";
        break;
        case 5:
        std::cout<<"it is may";
        break;
        case 6:
        std::cout<<"it is june";
        break;
        case 7:
        std::cout<<"it is july";
        break;
        case 8:
        std::cout<<"it is august";
        break;
        case 9:
        std::cout<<"it is sept";
        break;
        case 10:
        std::cout<<"it is oct";
        break;
        case 11:
        std::cout<<"it is nov";
        break;
        case 12:
        std::cout<<"it is dec";
        break;
        default:
        std::cout<<"please enter only number 1-12";
    }
    return 0;
}