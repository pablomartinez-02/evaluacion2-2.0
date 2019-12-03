#include<iostream>
//vamos a hacer un programa que haga un cuadrado con las medidas que quieras
int main(){
    //definicion variables
    char salir;
    int lado,col,fil;
    int cont;
    std::cout<< "dime el tamano del cuadrado: ";
    std::cin>> lado;
    for(cont=1;cont<=lado;cont++){
        for(fil=1;fil<=lado;fil++){
            std::cout<<'*';
        }
        std::cout<<'\n';       
     }
     std::cin>>salir;
}
