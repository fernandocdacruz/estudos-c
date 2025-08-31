#include <stdlib.h>
#include <stdio.h>

void mostrar_menu() {
	printf("\n[0] - Exit");
	printf("\n[1] - Create new vetor");
	printf("\n[2] - Show vector");
	printf("\n[3] - Show organize vector");
	
}

int obter_op_menu() {
	int op;
	int valid_input = 0;
	while (valid_input == 0) {
		printf("\n\nEnter the desire option: ");
		scanf("%d", &op);
		if (op < 0 || op > 4) {
			printf("\nInvalid option. Try again.");
		} else {
			valid_input = 1;
		}
	}
	return op;
}

int create_vect(int vect[]) {
	int i;
	printf("\n");
	for (i = 0; i < 5; i++) {
		printf("Enter the %d number: ", i + 1);
		scanf("%d", &vect[i]);
	}
}

void show_vect(int vect[]) {
	printf("\n");
	int i;
	for (i = 0; i < 5; i++) {
		printf("%d\n", vect[i]);
	}
}

void organize_vect(int vect[]) {
	printf("\n");
	int i, j, troca;
	for (i = 0; i < 4; i++) {
		for (j = i+1; j < 5; j++) {
			if (vect[i] > vect[j]) {
				troca = vect[i];
				vect[i] = vect[j];
				vect[j] = troca;
			}
		}
	}
	for (i = 0; i < 5; i++) {
		printf("%d\n", vect[i]);
	}
}

void executar_op(int op, int vect[]) {
	switch (op) {
		case 1: create_vect(vect);
			break;
		case 2: show_vect(vect);
			break;
		case 3: organize_vect(vect);
			break;
	}
}

int main() {
	
	printf("\nWelcome to the Order Vetor Program !!\n");
		
	int menu_op;
	int vect[5];
	
	do {
		mostrar_menu();
		menu_op = obter_op_menu();
		executar_op(menu_op, vect);
	} while (menu_op != 0);
	
	printf("\nProgram finished. Please come back soon.");
	printf("\nPress enter to continue...");
	getchar();
	getchar();
	
	return 0;
}
