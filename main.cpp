#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int vector[10],suma,resta,media;
    
    printf("Introduzca 10 números:\n");
    
    for(int i=0; i<10; i++){
        scanf("%d",&vector[i]);
    }
    
    for(int i=0; i<10; i++){
        suma+=vector[i];
        resta-=vector[i];
    }
    
    media=suma/10;
    
    printf("La suma de todos los números es: %d",suma);
    printf("\nLa resta de todos los números es: %d",resta);
    printf("\nLa media de todos los números es: %d",media);
    
    return 0;
}