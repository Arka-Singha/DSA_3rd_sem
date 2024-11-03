#include <stdio.h>
#include <math.h>

int N=0;


struct Node {
    
    double Date_year;  
    double Date_mon ;  
    double Date_day;  
    double Date_hour;  
    double Date_min ;  
    double Date_sec ;
    struct Node* next;
};

struct Node* Counting(struct Node* head)
{
    int count = 0;
    while (head=!NULL)
    {
        count++;
        head=head->next
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


// double calculateSpeedOfLight(double distanceEarthJupiter, double k) 
// {
//     return speedOfLight;
// }

int main() {
    struct Node* head = NULL;
    head=createNode();
    head->next=createNode();

    Counting( head);
   double Romers_Data[N];


    // Display the result
    printf("The speed of light is approximately %.2e km/s\n", speedOfLight);

    return 0;
}
