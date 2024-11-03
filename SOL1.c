#include <stdio.h>
#include <stdlib.h>  // Added for malloc
#include <math.h>
#include <time.h>

int N = 0;

struct Node {
    double Date_year;
    double Date_mon;
    double Date_day;
    double Date_hour;
    double Date_min;
    double Date_sec;
    struct Node* next;
};

// Function to count the number of nodes in the linked list
void Counting(struct Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    N = count;
}

// Function to create a new node
struct Node* createNode(double Date_year, double Date_mon, double Date_day, double Date_hour, double Date_min, double Date_sec) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->Date_year = Date_year;
    newNode->Date_mon = Date_mon;
    newNode->Date_day = Date_day;
    newNode->Date_hour = Date_hour;
    newNode->Date_min = Date_min;
    newNode->Date_sec = Date_sec;
    newNode->next = NULL;
    return newNode;
}

double calculateSpeedOfLight(struct Node* head, double distanceEarthJupiter, double k) 
{
    double Romers_Data[N];
    struct Node* ptr = head;
    for (int i = 0; i < N; i++)
    {
        Romers_Data[i]=
    }
    return speedOfLight;
}

int main() {
    struct Node* head = NULL;
    head = createNode(1668, 07, 22, 10, 41, 33);
    head->next = createNode(1669, 10, 26, 10, 26, 40);
    head->next->next = createNode(1671, 02, 19, 9, 1, 44);
    head->next->next->next = createNode(1671, 03, 27, 7, 42, 30);
    head->next->next->next->next = createNode(1671, 04, 04, 9, 41, 30);
    head->next->next->next->next->next = createNode(1671, 7, 24, 16, 15, 0);
    head->next->next->next->next->next->next = createNode(1671, 11, 12, , , );
    head->next->next->next->next->next->next = createNode(1672, 0, 3, 12, 42, 36);
    head->next->next->next->next->next->next->next = createNode(1672, 0, 10, 14, 32, 14);
    head->next->next->next->next->next->next->next->next = createNode(1672, 0, 12, 8, 59, 22);
    head->next->next->next->next->next->next->next->next->next = createNode(1672, 1, 11, 10, 57, 6);
    head->next->next->next->next->next->next->next->next->next->next = createNode(1672, 1, 20, 71, 20, 26);
    head->next->next->next->next->next->next->next->next->next->next->next = createNode(1672, 2, 7, 7, 58, 25);
    head->next->next->next->next->next->next->next->next->next->next->next->next = createNode(1672, 2, 14, 9, 52, 30);
    head->next->next->next->next->next->next->next->next->next->next->next->next->next = createNode(1672, 2, 23, 6, 18, 14);
    head->next->next->next->next->next->next->next->next->next->next->next->next->next->next = createNode(1672, 2, 28, 13, 45, 30);
    head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next = createNode(1672, 2, 30, 8, 14, 46);
    head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next = createNode(1672, 3, 6, 10, 11, 22);
    head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next = createNode(1672, 3, 6, 10, 11, 22);
    head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next = createNode(1672, 3, 13, 12, 8, 8);
    head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next = createNode(1672, 3, 22, 8, 34, 28);
    head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next = createNode(1672, 3, 29, 10, 30, 6);
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
// ->next
    Counting(head);    
    //result
    printf("aprrox speed Of Light = %d\n",calculateSpeedOfLight(head) );

    return 0;
}
