#include <stdio.h>
#include <stdlib.h>

int main() {

    int number;

    printf("Hello my friend !! Digit a number: ");
    scanf("%d", &number);

    printf("\nOk ! Let me think...\n");
    system("pause");
    printf("\nYour number is %d \n", number);
    printf("The number before is: %d \n", number -1);
    printf("The number after is: %d \n", number + 1);
    system("pause");
    system("cls");
    printf("Program finished. Welcome back.\n");
    system("pause");

    return 0;
}