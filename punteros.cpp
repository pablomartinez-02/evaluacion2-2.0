# include < iostream >
# include < stdio.h > // libreria para printf
# include < stdlib.h > // libreria para malloc
# include < cris_func.h >
# include < string.h > // libreria para strcopy

int  main () {
    char salir;
    char * palabras [ 4 ]; // OJO: si me dejo el asteruisco, no me puedo guardar el numero hexadecimal de la posición
    int cont;
    char aux [ 20 ];
    int longitud = 0 ;
    
    // Leo cuatro palabras:
    para (cont = 0 ; cont < 4 ; cont ++) {
        std :: cout << " Introduce tu palabra: " ;
        std :: cin >> aux;
        longitud = devuelve_longitud (aux);
        palabras [cont] = ( char *) malloc ((longitud + 1 ) * ( sizeof ( char ))); // reserva. que calcule los bits, porque no lo calcula el automaticamente
        // si viene el +1 es un error aleatorio
        // conversión forzada: de lo que de malloc lo transforma en un puntero caracter para que no pete
        // malloc = asignación de memoria
        strcpy (palabras [cont], aux); // copia de cadena. destino, origen
        // expera que los dos parámetros sean las posiciones de memoria de la primera letra de cada una de las palabras
        
    }
    
    std :: cout << " \ n LISTA DE PALABRAS \ n " ;
    para (cont = 0 ; cont < 4 ; cont ++) {
        printf ( " % s \ n " , palabras [cont]);
    }
    
    
    std :: cin >> salir;    
}
