#include<iostream>

int main(){
    std::string name ="bro";
    double gpa =2.5;
    char grade ='r';
    bool student =true;
    char grades[]={'a','b','c','d','e'};
    std::string students[]={"a","b","c","d","e","f"};

    std::cout<<sizeof(students)/sizeof(std::string)<<"elements\n";
    return 0;
}