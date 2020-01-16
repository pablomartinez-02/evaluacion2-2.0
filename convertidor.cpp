#include<iostream>
int main(){
    char salir;
    flotador dol;
    std::cout<<"convertir dollars a euros.\n";
    std::cout<<"puede meter decimales.\n";
    std::cout<<"el importe a convertir aqui: " ;
    std::cin>>dol;
    mientras que(dol<=0){
             std::cout<<"ha ocurrido un error.\n";
             std::cout<<"el importe modificado es 0 o negativo.\n";
             std::cout<<"importar de nuevo aqui: ";
             std::cin>>dol;
             }
    std::cout<<"su importe es igual a: ";
    std::cout<<(dol*0.91);
    std::cout<<"euros"
    std::cin>>salir;
    
    
}
