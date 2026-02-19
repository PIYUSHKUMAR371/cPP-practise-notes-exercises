#include<iostream>

int main(){
    std::string cars[][3] = {{"sfsfs","dfsfs","fafd"},
                              {"wfFW","SFSDFZ","gaegdf"},
                             {"Wefafas","dsffs","sdfsf"}};
    
    int rows =sizeof(cars)/sizeof(cars[0]);
    int column =sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            std::cout<<cars[i][j]<<" ";
        }
        std::cout<<'\n';
    }
    return 0;
}