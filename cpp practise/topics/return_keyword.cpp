#include<iostream>

double square(double length);
double volume(double length);

int main(){
    double length = 5.0;
    double area = square(length);
    double vol = volume(length);

    std::cout<<"area"<<area<<"cm\n";
    std::cout<<"volume is "<<vol<<"\n";

    return 0;
}
double square(double length){
    return length*length;
}
double volume(double length){
    return length*length*length;
}