#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    
    char cadena[250],cadena2[250];
    int longitud;
    
    printf("Introduce una cadena: ");
    gets(cadena);
    longitud=strlen(cadena);
    
    for(int i=longitud-1, j=0; i>=0; i--, j++){
        cadena2[j]=cadena[i];
    }
    
    printf("La cadena es: %s\n",cadena);
    printf("La inversa es: %s\n",cadena2);
    
    return 0;
}