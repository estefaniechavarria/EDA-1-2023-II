#include <stdio.h>
#include <stdlib.h>

struct Node {
   int dato;
   struct Node* prev;
   struct Node* next;
};

void insertAtHead(struct Node** head, int value) {
   struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->dato = value;
   newNode->prev = NULL;
   newNode->next = *head;
   if (*head != NULL) {
      (*head)->prev = newNode;
   }
   *head = newNode;
}

void deleteNode(struct Node** head, int key) {
   if (*head == NULL) {
      return;
   }
   struct Node* current = *head;
   if (current->dato == key) {
      *head = current->next;
      free(current);
      return;
   }
   while (current != NULL && current->dato != key) {
      current = current->next;
   }
   if (current == NULL) {
      return;
   }
   current->prev->next = current->next;
   if (current->next != NULL) {
      current->next->prev = current->prev;
   }
   free(current);
}

void displayList(struct Node* node) {
   struct Node* last;
   printf("\nMostrando estructura:\n");
   while (node != NULL) {
      printf("%d ", node->dato);
      last = node;
      node = node->next;
   }
}

int main() {
   struct Node* head = NULL;
  
   insertAtHead(&head, 5);
   insertAtHead(&head, 10);
   insertAtHead(&head, 15);
   
   int elemento;
   int opcion;
   while (1) {
      printf("\nBienvenido, elija la opcion con la operacion a realizar:\n");
      printf("1)Insertar un elemento.\n");
      printf("2)Eliminar un elemento.\n");
      printf("3)Salir\n");
      scanf("%d", &opcion);
      switch (opcion) {
         case 1:
            printf("\nIntroduce el elemento: ");
            scanf("%d", &elemento);
            insertAtHead(&head, elemento);
            displayList(head);
            break;
         case 2:
            printf("\nIntroduce el elemento a eliminar: ");
            scanf("%d", &elemento);
            deleteNode(&head, elemento);
            displayList(head);
            break;
         case 3:
         printf("Finalizo el programa");
            exit(0);
         default:
            printf("\nOpcion invalida. Intentalo de nuevo.\n");
      }
   }
   return 0;
}