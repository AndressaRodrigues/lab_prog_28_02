#include <stdio.h>
#include <stdlib.h>
#include "agenda.h"

void menu();

int main(void) {
    int registro=0;
    int op=0;
    do{
        menu();
        scanf("%d", &op);
        switch(op){
            case 1:
                insere(registro);
                registro++;
                break;
            
            case 2:
                imprimeTudo(registro);
                break;
            
            case 3:
                imprimeContato(registro);
                break;
            
            case 4:
                printf("\nInsira o nome a ser buscado:\n");
                __fpurge(stdin);
                char input[100];
                scanf("%[^\n]s", input);
                buscaNome(input, registro);
                break;
            
            case 5:
                printf("\nInsira o mes a ser buscado no formato MM:\n");
                int entrada = 0;
                scanf("%d", &entrada);
                buscaData(entrada, registro);
                break;

            case 6:
                break;
            
            default:
                printf("\nOpção inválida\n\n");
                break;
        }
    } while(op!=6);
}

void menu(){
    printf("\nMenu:\n");
    printf("\n1 - Inserir um novo contato\n");
    printf("\n2 - Imprimir todos os dados da agenda\n");
    printf("\n3 - Imprimir as informações de contato de todos na agenda\n");
    printf("\n4 - Buscar contatos por nome\n");
    printf("\n5 - Buscar contatos por mês de aniverário\n");
    printf("\n6 - Sair\n");
}