/*
Uso de variáveis em C ANSI
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	//Minhas variáveis;
	//[Tipo da variável][Nome da variável];
	int idade;
	char inicial;
	float altura;
	char nome;
	char Hello;
	
	// Entrada de dados
	// [NOME DA VARIÁVEL] = [CONTEÚDO DA VARIÁVEL];
	/*
	idade = 18;
	inicial = 'V';
	altura = 1.65;
	*/	
	Hello = 'Hello World';
	//Saída de dados;
	//Função printf();
	//printf ("[TEXTO FORMTADO]",[VARIÁVEIS]);
		
	printf("Qual a sua idade?\n");
	scanf("%i", &idade);
	fflush(stdin);
	printf("Digite sua altura!\n");
	scanf("%f", &altura);
	fflush(stdin);
	printf("Digite sua inicial ai\n");
	scanf("%c", &inicial);
	fflush(stdin);
	
	printf("Minha Idade e= %i\n", idade);
	printf("Minha Altura e= %f\n", altura);
	printf("Inicial do meu nome e= %c\n", inicial);
	
	return 0;
}