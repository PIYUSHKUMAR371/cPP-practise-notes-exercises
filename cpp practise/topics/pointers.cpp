#include<iostream>

int main(){
    std::string name = "Bro";
    int age = 21;
    std::string freepizza[5]= {"pizza1","pizza2","pizza3","pizza4","pizza5",};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pfreepizza = freepizza;

    std::cout<<pName<<"\n";
    std::cout<<*pName<<'\n';
    std::cout<<*pAge<<'\n';
    std::cout<<*pfreepizza<<'\n';
    return 0;
}