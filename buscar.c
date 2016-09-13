#include <stdio.h>

int strindex(char *cadena, int caracter){
    int i = 0;
    pos = -1;
    while (*cadena++ != '\0'){
        ++i;
        if (*cadena == caracter)
            pos = i;
    }
    return pos;
}

main(){
    char *cadena="Ciencia de la computacion";
    char caracter;
    printf("Escriba caracter a buscar")
    scanf("%c",&caracter);
    printf("%d",strindex(cadena,caracter));
}
