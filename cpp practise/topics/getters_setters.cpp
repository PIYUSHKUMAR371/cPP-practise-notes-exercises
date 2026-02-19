#include<iostream>

class stove{
    private:
       int temp = 0;
    public:
    stove(int temp){
        settemp(temp);
    }
    int gettemp(){
        return temp;
    }

    void settemp(int temp){
        if(temp<0){
            this->temp=0;
        }
        else if(temp>=10){
            this-> temp=10;
        }else{
        this->temp=temp;
        }
    }   
};

int main(){
    stove stove(0);
    stove.settemp(0);
    std::cout<<"the temp is"<<stove.gettemp();

    return 0;
}