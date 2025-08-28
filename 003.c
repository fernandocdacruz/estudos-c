#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("\nWelcome! This program calculates the average of 4 numbers.\n");

    int number;
    int total;
    float mean;

    for (int i = 0; i < 4; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &number);
        total += number;
    }

    mean = total / 4;

    printf("\nPlease wait while we process...\n");
    system("pause");

    printf("\nThank you for waiting. The mean is: %.2f\n", mean);
    system("pause");

    return 0;
}