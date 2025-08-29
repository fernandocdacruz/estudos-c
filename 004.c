#include <stdlib.h>
#include  <stdio.h>

void main() {

    float value, rate, profit, total_value;

    printf("\nWelcome to the crazy Bank program!!\n");
    printf("Enter the deposit value(U$S): ");
    scanf("%f", &value);
    printf(("Enter the rate value(%%): "));
    scanf("%f", &rate);

    profit = (rate / 100) * value;
    total_value = profit + value;

    printf("\nPlease wait while we process...\n");
    system("pause");

    printf("\nThank you for waiting.");
    printf("\nThe profit value is: U$S %.2f.", profit);
    printf("\nThe total value of your investment is: U$S %.2f.",total_value);

    printf("\n\nProgram finished. Always come back.\n");
    system("pause");

}