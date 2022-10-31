#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAMPILHA 10;

int pilha[TAMPILHA]={0,0,0,0,0,0,0,0,0,0};
int topo=0;

void lista_elementos(){
	
	printf("Pilha Atual:\n");
	for(int i=0;i<TAMPILHA;i++){
		printf("-");
		printf("|%d|", pilha[i]);
		printf("-");
	}
	printf("\n");
	printf("Topo: %d\n", topo);
}

void push(){
	if(topo<TAMPILHA){
		printf("Informe um valor: ");
		scanf("%d", pilha[topo]);
		topo++;
	}
	else{
		printf("A pilha está cheia.\n");
	}
}

void pop(){
	if(topo>0){
		pilha[topo-1]=0;
		topo--;
	}
	else{
		printf("A pilha está vazia.\n");
	}
}

void clear(){
	for(int i=0;i<TAMPILHA;i++){
		pilha[i]=0;
	}
	topo=0;
}

main(){
	setlocale(LC_ALL, "");
	int opcao;
	
	do{
		printf("--------------------------------");
		printf("[1]- listar elementos");
		printf("")
	}while(opcao!=5);
}
