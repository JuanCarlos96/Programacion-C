#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    char cadena1[250],cadena2[250],juntas[250];
    int i=0,j=0,longitud1,longitud2,longmax;
    
    printf("Introduce una palabra: ");
    gets(cadena1);
    
    printf("Introduce otra palabra: ");
    gets(cadena2);
    
    //Averiguo la longitud de la cadena1
    longitud1=0;
    while (cadena1[i]!='\0'){
        longitud1++;
        i++;
    }
    
    //Averiguo la longitud de la cadena2
    longitud2=0;
    while (cadena2[j]!='\0'){
        longitud2++;
        j++;
    }
    
    //Asigno la longitud máxima a una variable
    if (longitud1>longitud2){
        longmax=longitud1;
    }else{
        if(longitud1<longitud2){
            longmax=longitud2;
        }else{
            longmax=longitud1;
        }
    }
    
    //Asigno cada caracter por separado a un nuevo vector
    for (int i=0, j=0; i<=longmax; i++){
        juntas[j]=cadena1[i];
        j++;
        juntas[j]=cadena2[i];
        j++;
    }
    
    printf("%s",juntas);
    
    return 0;
}