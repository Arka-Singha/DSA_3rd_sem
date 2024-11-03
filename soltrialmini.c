#include <stdio.h>
#include <stdlib.h>  // Added for malloc
#include <math.h>
#include <time.h>

struct Node {
    double Date_year;
    double Date_mon;
    double Date_day;
    double Date_hour;
    double Date_min;
    double Date_sec;
    struct Node* next;
};

int N = 0;

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
    
    // Define two time structures to represent the dates
    struct tm date1 = {0};
    struct tm date2 = {0};

    // Set the values for date1 (11/12/2004)
    date1.tm_year = 2004 - 1900; // Year since 1900 (2004 - 1900 = 104)
    date1.tm_mon = 1 - 1;       // Month (0 - 11, December is 11)
    date1.tm_mday = 31;          // Day of the month

    // Set the values for date2 (23/01/2009)
    date2.tm_year = 2004 - 1900; // Year since 1900 (2009 - 1900 = 109)
    date2.tm_mon = 3 - 1;        // Month (0 - 11, January is 0)
    date2.tm_mday = 1;          // Day of the month

    // Convert dates to time_t (seconds since epoch)
    time_t time1 = mktime(&date1); // Convert date1 to seconds since epoch
    time_t time2 = mktime(&date2); // Convert date2 to seconds since epoch

    // Calculate the time difference
    time_t diff = difftime(time2, time1);

    // Print the difference in seconds
    printf("Time difference: %ld seconds\n", diff);

    return 0;
}
