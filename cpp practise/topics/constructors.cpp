#include<iostream>

class student{
    public:
        std::string name;
        int age;
        double gpa;
    student(std::string name,int age,double gpa){
        this->name=name;
        this->age=age;
        this->gpa=gpa;
    } 
};

int main(){
    student student1("Spongebob",25,3.5);
    student student2("bob",29,4.5);
    student student3("Sponge",26,3.7);
    
    std::cout<<student1.name<<'\n';
    std::cout<<student1.age<<'\n';
    std::cout<<student1.gpa<<'\n';

    std::cout<<student2.name<<'\n';
    std::cout<<student2.age<<'\n';
    std::cout<<student2.gpa<<'\n';

    std::cout<<student3.name<<'\n';
    std::cout<<student3.age<<'\n';
    std::cout<<student3.gpa<<'\n';

    return 0;
}