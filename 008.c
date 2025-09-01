#include <stdio.h>
#include <stdlib.h>

#define LENGTH 20

struct book {
    int id;
    int year;
    char title[50];
    char author[50];
    char subject[50];
    char publisher[50];
    int is_occupied;
};

void show_menu() {
    printf("\n\n[1] - Register book");
    printf("\n[2] - Print books information");
    printf("\n[3] - Search a book for id");
    printf("\n[4] - Sort books by year");
    printf("\n[5] - Exit");
}

int get_menu_op() {
    int op, valid_input;
    valid_input = 0;

    while (valid_input == 0) {
        printf("\n\nEnter the desire option: ");
        scanf("%d", &op);
        if (op < 0 || op > 5) {
            printf("\nInvalid option. Try Again.");
        } else {
            valid_input = 1;
        }
    }

    return op;
}

int find_free_next_index(struct book books[]) {
    int i;
    for (i = 0; i < LENGTH; i++) {
        if (books[i].is_occupied == 0) {
            return i;
        }
    }
    return -1;
}

void register_book(struct book books[]) {
    system("cls");
    int index;
    index = find_free_next_index(books);

    if (index == -1) {
        printf("\n\nThe library is full.");
    } else {
        printf("\n\nEnter the id: ");
        scanf("%d", &books[index].id);

        printf("Enter the year: ");
        scanf("%d", &books[index].year);

        getchar(); // consome o '\n' que ficou no buffer

        printf("Enter the title: ");
        scanf(" %49[^\n]", books[index].title);

        printf("Enter the author: ");
        scanf(" %49[^\n]", books[index].author);

        printf("Enter the subject: ");
        scanf(" %49[^\n]", books[index].subject);

        printf("Enter the publisher: ");
        scanf(" %49[^\n]", books[index].publisher);

        books[index].is_occupied = 1;
    }

    system("cls");
}


void print_books_information(struct book books[]) {
    int i, count;
    count = 1;
    system("cls");
    printf("\n");
    for (i = 0; i < LENGTH; i++) {
        if (books[i].is_occupied == 1) {
            printf("\nBook %d:", count);
            printf("\nYear: %d", books[i].year);
            printf("\nTitle: %s", books[i].title);
            printf("\nAuthor: %s", books[i].author);
            printf("\nSubject: %s", books[i].subject);
            printf("\nPublisher: %s", books[i].publisher);
            count++;
        }
    }
    printf("\n\nPress enter to continue...");
    getchar();
    getchar();
}

void execute_op(int op, struct book books[]) {
    switch (op) {
        case 1: register_book(books);
            break;
        case 2: print_books_information(books);
            break;
    }
}

int main() {

    struct book books[LENGTH];
    int menu_op;

    printf("\nWelcome to the SATOLEP Library!!");

    do {
        show_menu();
        menu_op = get_menu_op();
        execute_op(menu_op, books);
    } while (menu_op != 5);

    printf("\nProgram finished. Please come back soon !!");
    printf("\nPress enter to continue...");
    getchar();
    getchar();

    return 0;
}