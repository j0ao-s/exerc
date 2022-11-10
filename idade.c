#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){

	setlocale(LC_ALL, "Portuguese");
		
	int idade, anoNasc;
	
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	anoNasc = 2022-idade;
	
	printf("\nO ano que você nasceu foi: %d\n\n", anoNasc);
	
	printf("O programa parou!\n");
	
	system("PAUSE");
}