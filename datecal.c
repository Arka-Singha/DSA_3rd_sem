#include <stdio.h>
#include <time.h>

// Function to calculate the time difference in seconds
long calculateTimeDifference(struct tm *start, struct tm *end) {
    time_t startTime = mktime(start);
    time_t endTime = mktime(end);

    if (startTime == -1 || endTime == -1) {
        // Error in converting time to seconds
        return -1;
    }

    return difftime(endTime, startTime);
}

int main() {
    // Define the start and end dates
    struct tm startDate = {0};  // Initialize to zeros
    struct tm endDate = {0};

    // Set the start date (example: January 1, 2022, 12:00:00)
    startDate.tm_year = 2022 - 1900;  // Year is offset by 1900
    startDate.tm_mon = 0;  // Month is 0-based (0 for January)
    startDate.tm_mday = 1;  // Day of the month
    startDate.tm_hour = 12;  // Hour of the day
    startDate.tm_min = 0;  // Minute of the hour
    startDate.tm_sec = 0;  // Second of the minute

    // Set the end date (example: December 31, 2022, 23:59:59)
    endDate.tm_year = 2022 - 1900;
    endDate.tm_mon = 11;  // December
    endDate.tm_mday = 31;
    endDate.tm_hour = 23;
    endDate.tm_min = 59;
    endDate.tm_sec = 59;

    // Calculate the time difference
    long timeDifference = calculateTimeDifference(&startDate, &endDate);

    // Display the result
    if (timeDifference != -1) {
        printf("Time difference between the two dates is %ld seconds.\n", timeDifference);
    } else {
        printf("Error in calculating time difference.\n");
    }

    return 0;
}
