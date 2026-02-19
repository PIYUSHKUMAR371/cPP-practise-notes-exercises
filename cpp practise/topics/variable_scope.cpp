#include<iostream>

int mynum=3;

void printnum();

int main(){
    int mynum = 1;
    printnum();
    std::cout<<::mynum;
    return 0;
}
void printnum(){
    int mynum = 2;
    std::cout<<::mynum;
}