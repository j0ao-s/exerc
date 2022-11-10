#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main (){
	setlocale(LC_ALL, "Portuguese");
	
	float peso, altura, imc;
	
	printf("Esse software vai calcular o seu IMC\n\n");
	
	printf("Digite o seu peso em Kg: ");
	scanf("%f", &peso);
	printf("Digite a sua altura em Metros: ");
	scanf("%f", &altura);
	
	imc = peso/(altura*altura);
	
	printf("\n\nO seu índice de massa corporal é igual à: %.2f kg/m2", imc);
	
	printf("\n\nO programa acabou\n\n");
	
	system("PAUSE");
}