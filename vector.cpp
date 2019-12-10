#include<iostream>
//programa que pida x numeros  los guarde para calcular media
int main(){
    char salir;
    int num[4];
    int cont;
    int suma_numero;
//introduzcimos numeros vector
    for(cont=0;cont<=3;cont++){
    std::cout<<"introduce el numero ",cont,":";
    std::cin>> num[cont];
          }
//sacar numeros guardados
    std::cout<<"has metido os siguientes numeros\n";
    for(cont=0;cont<=3;cont++){
       std::cout<<num[cont];
       }
       //calculamos media
       std::cout<<"media\n";
       suma_numero=0;
       for(cont=0;cont<=3;cont++){
        suma_numero=suma_numero+num[cont];//suma acumulada
       }
       std::cout<<"la suma vale: ";
       std::cout<< suma_numero;
    
    std::cin>>salir;
}
