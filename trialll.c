#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int coeff;
  int exp;
  struct Node *next;
} Node;

typedef struct LinkedList {
  Node *head;
} LinkedList;

void push(LinkedList *list, int coeff, int exp) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->coeff = coeff;
  newNode->exp = exp;
  newNode->next = list->head;
  list->head = newNode;
}

void printList(LinkedList *list) {
  Node *temp = list->head;
  while (temp != NULL) {
    printf("%d%c ", temp->coeff, temp->exp == 0 ? ' ' : 'x^' + temp->exp);
    temp = temp->next;
  }
  printf("\n");
}

LinkedList *addPolynomials(LinkedList *list1, LinkedList *list2) {
  LinkedList *result = (LinkedList *)malloc(sizeof(LinkedList));
  result->head = NULL;

  Node *temp1 = list1->head;
  Node *temp2 = list2->head;
  while (temp1 != NULL || temp2 != NULL) {
    if (temp1 != NULL && temp2 != NULL) {
      if (temp1->exp == temp2->exp) {
        int newCoeff = temp1->coeff + temp2->coeff;
        if (newCoeff != 0) {
          push(result, newCoeff, temp1->exp);
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
      } else if (temp1->exp > temp2->exp) {
        push(result, temp1->coeff, temp1->exp);
        temp1 = temp1->next;
      } else {
        push(result, temp2->coeff, temp2->exp);
        temp2 = temp2->next;
      }
    } else if (temp1 != NULL) {
      push(result, temp1->coeff, temp1->exp);
      temp1 = temp1->next;
    } else {
      push(result, temp2->coeff, temp2->exp);
      temp2 = temp2->next;
    }
  }

  return result;
}

int main() {
  LinkedList *list1 = (LinkedList *)malloc(sizeof(LinkedList));
  list1->head = NULL;

  push(list1, 5, 2);
  push(list1, 4, 1);
  push(list1, 2, 0);

  LinkedList *list2 = (LinkedList *)malloc(sizeof(LinkedList));
  list2->head = NULL;

  push(list2, 7, 2);
  push(list2, 6, 1);
  push(list2, 3, 0);

  LinkedList *result = addPolynomials(list1, list2);

  printf("The sum of the two polynomials is: ");
  printList(result);

  free(list1);
  free(list2);
  free(result);

  return 0;
}
