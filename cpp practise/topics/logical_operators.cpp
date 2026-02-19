#include<iostream>

int main(){
    int temp;
    bool sunny=true;

    std::cout<<"enter the temp:";
    std::cin>>temp;

    if(temp>0 && temp <30) {
        std::cout<<"the temp is good";
    }
    else{
        std::cout<<"the temp is bad \n";
    }
    if(!sunny){
        std::cout<<"this is really sunny";
    }
    else{
        std::cout<<"this is not sunny";
    }
    return 0;
}