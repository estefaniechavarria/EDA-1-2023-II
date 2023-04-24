#include <stdio.h>
#include<string.h>

#define MAX 5


void addFront(int *, int, int *, int *);
void addRear(int *, int, int *, int *);
int delFront(int *, int *, int *);
int delRear(int *, int *, int *);
void display(int *);
int count(int *);
char palabra;
void addFront(int *arr, int item, int *pfront, int *prear) {
  int i, k, c;

  if (*pfront == 0 && *prear == MAX - 1) {
    printf("\nDeque esta llena.\n");
    return;
  }

  if (*pfront == -1) {
    *pfront = *prear = 0;
    arr[*pfront] = item;
    return;
  }

  if (*prear != MAX - 1) {
    c = count(arr);
    k = *prear + 1;
    for (i = 1; i <= c; i++) {
      arr[k] = arr[k - 1];
      k--;
    }
    arr[k] = item;
    *pfront = k;
    (*prear)++;
  } else {
    (*pfront)--;
    arr[*pfront] = item;
  }
}

void addRear(int *arr, int item, int *pfront, int *prear) {
  int i, k;

  if (*pfront == 0 && *prear == MAX - 1) {
    printf("\nDeque esta llena.\n");
    return;
  }

  if (*pfront == -1) {
    *prear = *pfront = 0;
    arr[*prear] = item;
    return;
  }

  if (*prear == MAX - 1) {
    k = *pfront - 1;
    for (i = *pfront - 1; i < *prear; i++) {
      k = i;
      if (k == MAX - 1)
        arr[k] = 0;
      else
        arr[k] = arr[i + 1];
    }
    (*prear)--;
    (*pfront)--;
  }
  (*prear)++;
  arr[*prear] = item;
}

int delFront(int *arr, int *pfront, int *prear) {
  int item;

  if (*pfront == -1) {
    printf("\nDeque esta vacia.\n");
    return 0;
  }

  item = arr[*pfront];
  arr[*pfront] = 0;

  if (*pfront == *prear)
    *pfront = *prear = -1;
  else
    (*pfront)++;

  return item;
}

int delRear(int *arr, int *pfront, int *prear) {
  int item;

  if (*pfront == -1) {
    printf("\nDeque esta vacia.\n");
    return 0;
  }

  item = arr[*prear];
  arr[*prear] = 0;
  (*prear)--;
  if (*prear == -1)
    *pfront = -1;
  return item;
}

void display(int *arr) {
  int i;

  printf("\n frente:  ");
  for (i = 0; i < MAX; i++)
    printf("  %d", arr[i]);
  printf("  :parte trasera");
}

int count(int *arr) {
  int c = 0, i;

  for (i = 0; i < MAX; i++) {
    if (arr[i] != 0)
      c++;
  }
  return c;
}
  

int main()
{
    char palabra[100];
    int i, tamano, verificacion = 1;

    printf("Bienvenido al sistema de Revision de palabras.\n\n");
    printf("Instruccion:\n1)Ingresar la palabra a verificar en minusculas.\n\n");
    printf("Ingresa la palabra: ");
    scanf("%s", palabra);
    printf("\n");
    
    tamano = strlen(palabra);
    
    for(i = 0; i < tamano / 2; i++)
    {
        if(palabra[i] != palabra[tamano - 1 - i])
        {
            verificacion = 0;
            break;
        }
    }
    
    if(verificacion)
    {
        printf("%s : Es palindromo.\n", palabra);
    }
    else
    {
        printf("%s : No es palindromo.\n", palabra);
    }
   return 0;
}