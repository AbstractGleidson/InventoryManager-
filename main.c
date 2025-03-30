#include <stdio.h>
#include <stdlib.h>
#include "interface/interface.c"

int main(){
    int choice = menu(center("User", 32), "ADM", "Cliente", "Sair");

    printf("You selected option %d\n", choice);
    return 0;
}