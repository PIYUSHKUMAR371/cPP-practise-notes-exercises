#include<iostream>

double gettotal(double prices[],int size);

int main(){
    double price[]={49,34,34.99,65,87,45,67};
    int size=sizeof(price)/sizeof(price[0]);
    double total =gettotal(price,size);

    std::cout<<"$"<<total;
    return 0;
}
double gettotal(double prices[],int size){
    double total= 0;

    for(int i=0;i<size;i++){
        total+=prices[i];
    }
    return total ;
}