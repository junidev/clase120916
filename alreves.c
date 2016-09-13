#include <stdio.h>


main() {
    char cadena='';
    printf("Introduzca la secuencia de entrada: ");
    scanf("%d",cadena);
    printf("\nLa secuencia invertida es: ");
    invertir(cadena);
}

void invertir(char cad[], int pos) {
    static int i = 0;
    char tmp;
    if (cad[pos])
        invertir(cad, pos + 1);
        tmp = cad[pos];
        cad[pos] = cad[i];
        cad[i++] = tmp;
}
