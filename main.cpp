#include <stdio.h>
#include <stdlib.h>

bool indexOf(){
    
    
    
}

int main(int argc, char** argv) {
    
    //Pido la frase al usuario
    printf("Introduzca una frase: ");
    gets(cadena);
    
    //Averiguo la longitud de la cadena
    int i, longitud=0;
    while (cadena[i]!='\0'){
        longitud++;
        i++;
    }
    
    //Pido el carácter que quiere buscar
    printf("Introduzca un carácter: ");
    scanf("%c",&c);
    
    //Busco ese carácter por todo el vector, si lo encuentra devuelve un mensaje
    //con la posición
    for(int i=0; i<=longitud; i++){
        if(c==cadena[i]){
            encontrado=true;
            printf("El carácter introducido está en la posición %d\n",i);
        }
    }
    
    if(encontrado==false){
        printf("No se encuentra el carácter en el vector");
    }
    
    return 0;
}