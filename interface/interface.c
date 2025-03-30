#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "interface.h"

int menu(char title[], char option1[], char option2[], char option3[]){
    int choice;

    printf("\n================================\n");
    printf("%s", title);
    printf("\n================================\n");
    printf("1. %s\n", option1);
    printf("2. %s\n", option2);
    printf("3. %s\n", option3);
    printf("================================\n");

    printf("Escolha uma opcao: ");
    scanf(" %d", &choice);
    system("cls||clear"); // Limpa a tela para melhor visualizacao

    if(choice < 1 || choice > 3) {
        printf("Opcao invalida. Tente novamente.\n");
        choice = menu(title, option1, option2, option3);
    }
    return choice;
}

char *center(char string[], int size) {
    int len = strlen(string);
    if (len >= size) {
        // Se a string for maior ou igual ao tamanho, retorna uma cópia da string original
        char *centered = (char *)malloc(sizeof(char) * (len + 1));
        strcpy(centered, string);
        return centered;
    }

    int padding = (size - len) / 2; // Calcula o número de espaços à esquerda
    char *centered = (char *)malloc(sizeof(char) * (size + 1)); // +1 para o terminador nulo

    // Preenche a string com espaços
    memset(centered, ' ', size);
    centered[size] = '\0'; // Adiciona o terminador nulo

    // Copia a string original para o centro
    memcpy(centered + padding, string, len);

    return centered;
}