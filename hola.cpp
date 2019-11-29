#include<iostream>


int main(){
    //definicion de variables
    char salir;
    char respuesta;
    std::cout<<"hola mundo,mi primer programa";
    std::cout<<"eres guapo o guapa? (s/n)";
    std::cin>>respuesta;
    if(respuesta=='s'){
    std::cout<<"hola guapo";
}
    else{
    std::cout<<"hola feo";
}
    std::cin>>salir;
    
}
