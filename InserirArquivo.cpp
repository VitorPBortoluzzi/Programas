#include <iostream>
#include <cstdlib>
#include "InsArq.h"
using namespace std;

int main(){
    int valor;
    FILE * procurador;
    char nomeArquivo[200];
    Arvore *raiz = NULL;

    printf("Nome do arquivo contendo os numeros:  ");
		scanf("%s", nomeArquivo);
		procurador = fopen(nomeArquivo, "rt");
        if(!procurador){
                printf("Arquivo nao Localizado");
                exit(0);
            }
    do{
			fscanf(procurador,"%d", &valor);
            raiz = inserir(valor,raiz);
		}while(!feof(procurador));
  exibir(raiz,0);
}
