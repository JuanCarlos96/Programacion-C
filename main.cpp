#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    char cadena[250];
    
    //Pido la frase al usuario
    printf("Introduzca una frase: ");
    gets(cadena);
    
    //Comparo la primera posición del vector para ver si es una 'H', esta vez
    //da igual si la 'h' es minúscula o mayúscula
    if (cadena[0]=='H' || cadena[0]=='h'){
        printf("La frase empieza por H");
    }else{
        printf("La frase no empieza por H");
    }
    
    return 0;
}