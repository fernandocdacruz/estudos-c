#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    printf(("Bem vindo a calculadora humana"));

    char nome[30];
    int idade;
    float altura;

    printf("\nDigite o seu nome: ");
    scanf("%29s", nome);
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("\nO seu nome é %s, o seu ano de nascimento é %d e a sua altura é %.2f!",nome,(2025 - idade), altura);
    printf("\nPrograma encerrado. Volte Sempre.");
    system("pause");

    return 0;
}