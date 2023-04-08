#include <stdio.h>
#include <stdlib.h>
int main()
{
int opcion;
int numero;
int stack[10] = {1,2,3,4,5,6,7,8,9,10};
int indice = 0;

do {
    printf("Bienvenido al Sistema de Turnos.\n");
    printf("Opciones disponibles: \n 1)Tomar un turno.\n 2)Salir.\n");
    printf("Elija una opcion\n");
    scanf("%d", &opcion);
    numero = opcion;
    
    if (numero == 1)
 {
     printf("Su turno es: %d. Por favor espere a que le llamen.", indice+1, stack[indice]);
        indice+=1;
        printf("\n");
        printf("\n");
        printf("\n");
 }
 
 if (numero == 2) {
 printf("Esperamos haber podido ayudarlo, vuelva pronto.\n");
}
}
while (numero == 1);

 return 0;

}