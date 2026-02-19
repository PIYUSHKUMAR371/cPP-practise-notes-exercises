#include<iostream>

int searcharray(int array[],int size,int element);

int main(){
    int numbers[]={34,234,324,24,35,74,};
    int size=sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int mynum;
    std::cout<<"enter element to search for"<<'\n';
    std::cin>>mynum;

    index =searcharray(numbers,size,mynum);

    if(index !=-1){
        std::cout<<mynum<<"is at index"<<index;
    }else{
        std::cout<<"element not present\n";
    }
    return 0;
}
int searcharray(int array[],int size,int element){
    for(int i=0;i<size;i++){
        if(array[i]==element){
            return i;
        }
    }
    return -1;
}