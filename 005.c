#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float n1, n2, total;

    printf("Enter the first number: ");
    scanf("%f", &n1);
    printf("Enter the second number: ");
    scanf("%f", &n2);

    total = pow(n1,n2);

    printf("\nThe pow value is: %.2f", total);
    printf("\nPress enter to continue");
    getchar();
    getchar();

    return 0;

}