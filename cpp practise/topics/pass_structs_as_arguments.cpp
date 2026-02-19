#include <iostream>
#include<string>

struct car{
    std::string model;
    int year;
    std::string color;
};

void printcar( const car& car);
void paintcar(car &car,std::string color);

int main(){
    car car1;
    car1.model = "mustang";
    car1.year = 2023;
    car1.color = "red";

    paintcar(car1,"silver");
    printcar(car1);
    return 0;
}

void printcar(const car& car){
    std::cout<<car.model<<'\n';
    std::cout<<car.year<<'\n';
    std::cout<<car.color<<'\n';
}

void paintcar(car &car,std::string color){
    car.color = color;
}