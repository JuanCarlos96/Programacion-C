#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv) {
    
    int vector[20],num;
    bool encontrado=false;
    srand(time(NULL));
    
    for(int i=0; i<20; i++){
        vector[i]=(rand() % 21)-10;
        printf("%d,",vector[i]);
    }
    
    printf("\nIntroduzca un número del vector: (11 para terminar)");
    scanf("%d",&num);
    
    while (num!=11){
        if (num<=10 && num>=-10){
            for (int i=0; i<20; i++){
                if (vector[i]==num){
                    printf("El número está en la posición: %d\n",i);
                    encontrado=true;
                }else{
                    encontrado=false;
                }
            }
        }else{
            printf("El número no está");
        }
        if (encontrado==false){
            printf("El número no está");
        }
    printf("\nIntroduzca un número del vector: (11 para terminar)");
    scanf("%d",&num);
    }
    
    printf("Adiós");
    
    return 0;
}