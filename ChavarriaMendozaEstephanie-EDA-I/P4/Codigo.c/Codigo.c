#include <stdio.h>
#include <stdlib.h>
int main () 
{
  
char matriz[8][8] = { {'T', 'C', 'A', 'R', 'Q', 'A', 'C', 'T'}, {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'}, {'.', '.', '.', '.', '.', '.', '.', '.'}, {'.', '.', '.', '.', '.', '.', '.', '.'}, {'.', '.', '.', '.', '.', '.', '.', '.'}, {'.', '.', '.', '.', '.', '.', '.', '.'}, {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'}, {'T', 'C', 'A', 'R', 'Q', 'A', 'C', 'T'} };
char Reys[8][8] = { {'T', 'C', 'A', 'R', 'Q', 'A', 'C', 'T'}, 
{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'}, 
{'.', '.', '*', '.', '*', '.', '.', '.'}, 
{'.', '.', '.', '.', '.', '.', '.', '.'}, 
{'.', '.', '.', '.', '.', '.', '.', '.'}, 
{'.', '.', '.', '.', '.', '.', '.', '.'}, 
{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'}, 
{'T', 'C', 'A', 'R', 'Q', 'A', 'C', 'T'} };
char rys[8][8] = { {'T', 'C', 'A', 'R', 'Q', 'A', 'C', 'T'}, 
{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'}, 
{'.', '.', '.', '.', '.', '.', '.', '.'}, 
{'.', '.', '.', '.', '.', '.', '.', '.'}, 
{'.', '.', '.', '.', '.', '.', '.', '.'}, 
{'.', '.', '*', '.', '*', '.', '.', '.'}, 
{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'}, 
{'T', 'C', 'A', 'R', 'Q', 'A', 'C', 'T'} };
char queen[8][8] = { {'T', 'C', 'A', 'R', 'Q', 'A', 'C', 'T'}, 
{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'}, 
{'.', '.', '.', '*', '*', '*', '.', '.'}, 
{'.', '.', '*', '.', '*', '.', '*', '.'}, 
{'.', '*', '.', '.', '*', '.', '.', '*'}, 
{'*', '.', '.', '.', '.', '.', '.', '.'}, 
{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'}, 
{'T', 'C', 'A', 'R', 'Q', 'A', 'C', 'T'} };
char reynas[8][8] = { {'T', 'C', 'A', 'R', 'Q', 'A', 'C', 'T'}, 
{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'}, 
{'.', '.', '.', '.', '.', '.', '.', '.'}, 
{'*', '.', '.', '.', '*', '.', '.', '.'}, 
{'.', '*', '.', '.', '*', '.', '.', '*'}, 
{'.', '.', '*', '.', '*', '.', '*', '.'}, 
{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'}, 
{'T', 'C', 'A', 'R', 'Q', 'A', 'C', 'T'} };
int r, c;
int *arregloReys = Reys;
int *arreloRys = rys;
int *arregloqueen = queen;
int *arregloreynas = reynas;
char op;
int x, y;
printf("El  arreglo'Matriz' tine un un tamaño de %zd bytes\n", sizeof(matriz));
printf ("Tablero de ajedrez\n");

  
for (r = 0; r < 8 ; r++)	//Representa al renglC3n del arreglo
    {
      
for (c = 0; c < 8; c++)	//Representa a la columna del arreglo
	{
	  
printf ("%c", matriz[r][c]);
	
}
      
printf ("\n");
    
}


printf("Elige la pieza que deseas mover\n");
printf("a)Torre.\n");
printf("b)Caballo.\n");
printf("c)Alfil.\n");
printf("d)Rey.\n");
printf("e)Reyna.\n");
printf("f)Peon.\n");
printf("g)Salir.\n");
scanf("%c",&op);
 switch(op)
 {
 case 'a':
 printf("Se seleccionó 'Torre.'\n");
 printf("Introduzca las coordenadas de la Torre que quiere mover");
 scanf("%d, %d", x, y);
 break;
 case 'b':
 printf("Se seleccionó 'Caballo.'\n");
 printf("Introduzca las coordenas del Caballo que desea mover");
 scanf("%d, %d", x, y);
 break;
 case 'c':
 printf("Se seleccionó 'Alfil.'\n");
 printf("Introduzca las coordenadas del Alfil que desea mover");
 scanf("%d, %d", x, y);
 break;
 case 'd':
 printf("Se seleccionó 'Rey.'\n");
 printf("Introduzca las coordenadas del Rey que desea mover.\n");
 scanf("%d, %d", x, y);
 if ("%d, %d", x,y == 4,0)
 {
     if("%d, %d", x,y == 4,7)
     printf("Movimientos posibles.\n %d", *arregloReys);
 }
 else {
     printf("Movimientos posibles.\n %d", *arreloRys);
 }
 break;
 case 'e':
 printf("Se seleccionó 'Reyna.'\n");
 printf("Introduzca las coordenadas de la Reyna que desea mover");
 scanf("%d, %d", x, y);
 if ("%d, %d", x,y == 5,0)
 {
     if("%d, %d", x, y == 5,7)
     printf("Los movimientos posibles son:\n %d", *arregloqueen);
 }
 else {
     printf("Movimientos posibles:\n %d", *arregloreynas);
 }
 break;
 case 'f':
 printf("Se seleccionó 'Peon.'\n");
 printf("Introduzca las coordenadas del Peon que desea mover");
 scanf("%d, %d", x, y);
 break;
 case 'g':
 printf("Se selecciono 'Salir.'\n");
 }

return 0;

}
