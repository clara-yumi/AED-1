#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cel{
	char nome[15];
	struct cel *seg;
};

typedef struct cel celula;

void insere_final(char y[], celula *p){
	celula *nova;
	nova = malloc(sizeof(celula));
	strcpy(nova->nome, y);
	nova->seg = NULL;
	while(p->seg != NULL){
		p = p->seg;
	}
	p->seg = nova;
}

celula *busca(char x[], celula *lst){
	celula *p;
	p = lst;
	while(p != NULL && strcmp(p->seg->nome, x) != 0){
		p = p->seg;
	}
	return p;
}

void insere_meio(char y[], celula *p){
	celula *nova;
	nova = malloc(sizeof(celula));
	strcpy(nova->nome, y);
	nova->seg = p->seg;
	p->seg = nova;
}

void imprima(celula *lst){
	celula *p;
	for(p = lst->seg; p != NULL; p = p->seg){
		if(p->seg == NULL)
			printf("%s\n", p->nome);
		else
			printf("%s ", p->nome);
	}
}

int main(){
	celula *cabeca = malloc(sizeof(celula));
	strcpy(cabeca->nome, "cabeca");
	cabeca->seg = NULL;
	
	char L[1000], N[1000], S[15];
	char *amigo;
	celula *anterior;
	
	gets(L);
	gets(N);
	gets(S);
	
	amigo = strtok(L, " ");
	while(amigo != NULL){
		insere_final(amigo, cabeca);
		amigo = strtok(NULL, " ");
	}
	
	if(strcmp(S, "nao") == 0){
		amigo = strtok(N, " ");
		while(amigo != NULL){
			insere_final(amigo, cabeca);
			amigo = strtok(NULL, " ");
		}
	}
	else{
		celula *anterior = busca(S, cabeca);
		amigo = strtok(N, " ");
		while(amigo != NULL){
			insere_meio(amigo, anterior);
			amigo = strtok(NULL, " ");
			anterior = anterior->seg;
		}
	}
	
	imprima(cabeca);
}
