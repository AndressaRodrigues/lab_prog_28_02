#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct def_contato{
    char nome[100];
    char email[50];
    long int tel;
    int data[3];
    char obs[200];
} t_contato;

t_contato contato[10];

void insere(int posicao){

    
    printf("\nInsira o nome do contato:\n");
    __fpurge(stdin);
    scanf("%[^\n]s", contato[posicao].nome);
    
    printf("\nInsira e-mail do contato:\n");
    __fpurge(stdin);
    scanf("%[^\n]s", contato[posicao].email);
    
    printf("\nInsira o telefone do contato no formato (DDD)NNNNNNNNN', sem os parenteses:\n");
    __fpurge(stdin);
    scanf("%ld", &contato[posicao].tel);
    
    printf("\nInsira o dia de nascimento no formato DD:\n");
    __fpurge(stdin);
    scanf("%d", &contato[posicao].data[0]);
    printf("\nInsira o mes de nascimento no formato MM:\n");
    __fpurge(stdin);
    scanf("%d", &contato[posicao].data[1]);
    printf("\nInsira ano de nascimento no formato AAAA :\n");
    __fpurge(stdin);
    scanf("%d", &contato[posicao].data[2]);
    
    printf("\nInsira alguma informação especial, caso deseje:\n");
    __fpurge(stdin);
    scanf("%[^\n]s", contato[posicao].obs);

    }

void imprimeTudo(int registros){
    printf("\nRegistros na agenda:\n\n");
    for (int i=0; i<registros; i++){
        printf("\nContato [%d]:\n", i+1);
        printf("\nNome: %s\n", contato[i].nome);
        printf("\nEmail: %s\n", contato[i].email);
        printf("\nTelefone: %ld\n", contato[i].tel);
        printf("\nData de Nascimento: %s\n", contato[i].data);
        printf("\nObservção: %s\n\n", contato[i].obs);
    }
}

void imprimeContato(int registros){
    printf("\nRegistros de contato agenda:\n\n");
    for (int i=0; i<registros; i++){
        printf("\nContato [%d]:\n", i+1);
        printf("\nNome: %s\n", contato[i].nome);
        printf("\nEmail: %s\n", contato[i].email);
        printf("\nTelefone: %ld\n", contato[i].tel);
        }
    }

void buscaNome(char chave[100], int registro){
    int achou = 0;
    for (int i=0; i<registro; i++){
        if(strcmp(chave, contato[i].nome)==0){
    
        printf("\nNome: %s\n", contato[i].nome);
        printf("\nEmail: %s\n", contato[i].email);
        printf("\nTelefone: %d\n", contato[i].tel);
        printf("\nData de Nascimento:\n");
        printf("%d\t", contato[i].data[0]);
        printf("%d\t", contato[i].data[1]);
        printf("%d\n", contato[i].data[2]);
        printf("\nObservção: %s\n\n", contato[i].obs);
            achou++;
        }
    }
    if(achou==0){
        printf("\nNome não cadastrado na agenda\n\n");
    }
    
}

void buscaData (int chave, int registro){
    int achou = 0;
    for (int i=0; i<registro; i++){
        if(chave == contato[i].data[1]){
        achou++;
        printf("\nNome: %s\n", contato[i].nome);
        printf("\nEmail: %s\n", contato[i].email);
        printf("\nTelefone: %d\n", contato[i].tel);
        printf("\nData de Nascimento: %s\n", contato[i].data);
        printf("\nObservção: %s\n\n", contato[i].obs);
        }

    }
     if(achou==0){
        printf("\nNinguém faz aniversário no mês consultado\n\n");
    }
}