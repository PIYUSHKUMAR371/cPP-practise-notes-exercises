#include<iostream>

enum day {sunday=0,monday=1,tuesday=2,wednesday=3,thursday=4,friday=5,saturday=6};

int main (){
    day today = sunday;

    switch(today){
        case sunday: std::cout<<"it is sunday\n";
        break;
        case monday: std::cout<<"it is monday\n";
        break;
        case tuesday: std::cout<<"it is tuesday\n";
        break;
        case wednesday: std::cout<<"it is wednesday\n";
        break;
        case thursday: std::cout<<"it is thursday\n";
        break;
        case friday: std::cout<<"it is friday\n";
        break;
        case saturday: std::cout<<"it is saturday\n";
        break;
    }
}