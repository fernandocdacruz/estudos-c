#include <stdlib.h>
#include <stdio.h>

#define LENGTH 5

struct stack_invoice {
    int invoice_numbers[LENGTH];
    int start;
    int end;
};

struct stack_invoice invoices;
int op;

void add_invoice();
void delete_invoice();
void list_invoices();
void show_menu();
int get_op_menu();

int main() {

    op = 1;
    invoices.start = 0;
    invoices.end = 0;

    while (op != 0) {
        show_menu();
        op = get_op_menu();
        switch (op) {
            case 1: add_invoice();
                break;
            case 2: delete_invoice();
                break;
            case 3: list_invoices();
                break;
        }
    }

    printf("\nProgram finished. Please come back soon.");
    printf("\nPress enter to finish...");
    getchar();
    getchar();

    return 0;

}

void show_menu() {
    printf("\n[0] - Exit");
    printf("\n[1] - Add invoice");
    printf("\n[2] - Remove invoice");
    printf("\n[3] - List invoices\n");
}

int get_op_menu() {
    int op;
    int valid_input = 0;
    while (valid_input == 0) {
        printf("\nEnter the desire option: ");
        scanf("%d", &op);
        if (op < 0 || op > 3) {
            printf("\nInvalid option. Try again.\n");
        } else {
            valid_input = 1;
        }
    }
    return op;
}

void add_invoice() {
    if (invoices.end == LENGTH) {
        printf("\nThe invoice stack is full. Delete one.");
    } else {
        printf("\nEnter the invoice number: ");
        scanf("%d", &invoices.invoice_numbers[invoices.end]);
        invoices.end++;
    }
}

void delete_invoice() {
    if (invoices.start == invoices.end) {
        printf("\nThe invoice stack is empty. Add a invoice.");
    } else {
        invoices.invoice_numbers[invoices.end - 1] = 0;
        invoices.end--;
    }
}

void list_invoices() {

    int i;

    for (i = 0; i < LENGTH; i++) {
        printf("\n%d",invoices.invoice_numbers[i]);
    }
}