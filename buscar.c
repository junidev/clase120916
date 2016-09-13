#include <string.h>
#include <stdio.h>

main()
{
char caract, cadena[80], *ptr;
printf("\nIntroduzca la cadena donde se va a buscar:\n");
//para leer cadenas de texto con espacios usamos gets
gets(cadena);
printf("\nEscriba el caracter a buscar:\n");
//para leer un solo caracer podemos usar getchar
caract=getchar();
//para buscar una cadena dentro de otra usamos strstr(contenida y nos arroja la posicion)
ptr=strchr(cadena, caract);
if (ptr==0) printf("\nEl caracter %c no se encuentra en la cadena.\n",caract);
else printf("La posicion del caracter es %d.\n", ptr-cadena+1);
getch();
}
