#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    char cadena[250];
    int longitud=0;
    
    printf("Introduzca una cadena: ");
    //Guardo la cadena en el vector
    gets(cadena);
    
    //Averiguo la longitud de la cadena
    int i=0;
    while (cadena[i]!='\0'){
        longitud++;
        i++;
    }
    
    //Escribo los caracteres con un salto de línea
    for(int i=0; i<=longitud; i++){
        printf("%c\n",cadena[i]);
    }
    
    return 0;
}