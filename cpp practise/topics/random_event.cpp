#include<iostream>
#include<ctime>

int main(){
    srand(time(0));
    int randnum=(rand()%5+1);

    switch(randnum){
        
        case 1:std::cout<<"you win a bumper sticker\n";
        break;
        case 2:std::cout<<"you win a t-shirt \n";
        break;
        case 3:std::cout<<"you win a bum\n";
         break;
        case 4:std::cout<<"you win a bump\n";
         break;
        case 5:std::cout<<"you win a trump\n";
         break;
    }

    return 0;
}