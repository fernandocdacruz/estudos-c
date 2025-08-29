#include <stdio.h>
#include  <stdlib.h>

char check_op() {
    char op;
    printf("\nYou want to check a number (y / n): ");
    scanf("%c", &op);
    return op;
}

void check_number() {
    int number;
    char op;

    printf("\nEnter a number: ");
    scanf("%d", &number);
    if (number % 5 == 0) {
        printf("\nThe number is divisible for 5.\n");
    } else {
        printf("\nThe number is not divisible for 5.\n");
    }

    op = check_op();

    if (op == 'y') {
        check_number();
    }

}

int main() {

    char op;
    op = check_op();

    if (op == 'y') {
        check_number();
    }

    printf("\nProgram finished. Please come back soon.");
    printf("\nPress enter to continue...");
    getchar();
    getchar();

    return 0;
}