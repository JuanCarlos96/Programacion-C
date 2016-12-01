#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int vector[10],num;
    bool encontrado=false;
    
    printf("Introduce 10 números:\n");
    
    //Leo los diez números y los paso a una posición en el vector
    for(int i=0; i<10; i++){
        scanf("%d",&vector[i]);
    }
    
    printf("\nIntroduzca un número del vector: ");
    scanf("%d",&num);
    
    //Comparo el valor introducido con los valores del vector
    for(int i=0; i<10 && encontrado==false; i++){
        if(num==vector[i]){
            encontrado=true;
            printf("El número introducido está en la posición %d",i);
        }
    }
    
    if(encontrado==false){
        printf("El número no se encuentra en el vector");
    }
    
    return 0;
}