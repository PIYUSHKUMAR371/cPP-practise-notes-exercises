#include<iostream>

int main(){
    int grades[]={ 23,131,123,13,324,5435,765};
    for(int grade:grades){
        std::cout<<grade<<"\n";
    }
    return 0;
}