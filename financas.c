#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	//mudança de idioma
	setlocale(LC_ALL, "Portuguese");
	
	//declaração de variáveis
	float salario, custoFixo, lazer, investimento, caixa, acoesBr, realEstate, ativosInter;
	
	printf("Este software vai te ajudar a investir!\n");
	
	//entrada de dados
	printf("Digite o valor do seu sálario: ");
	scanf("%f", &salario);
	
	//primeiro processamento
 	custoFixo = (salario*5)/10;
 	lazer = (salario*3)/10;
 	investimento = (salario*2)/10;
 	
 	//segundo processamento
 	acoesBr = (investimento*2.5)/10;
 	realEstate = (investimento*2.5)/10;
 	caixa = (investimento*2.5)/10;
 	ativosInter = (investimento*2.5)/10;
 	
 	//saida de dados
 	printf("\nVocê tem que reservar esta quantia em dinheiro para custos fixos necessários: %.2f\n", custoFixo);
 	printf("Você tem que reservar esta quantia em dinheiro para o lazer: %.2f\n", lazer);
 	printf("Você tem que reservar esta quantia em dinheiro para os investimentos: %.2f\n\n", investimento);
 	
 	printf("Vamos ajudar você à investir os %.2f que serão reservados.\n\n", investimento);
 	
 	printf("Você tem que reservar para ações brasileiras, ETF's e fundos multimercados/ações a quantia de: %.2f\n", acoesBr);
	printf("Você tem que reservar para investimentos em geral no mercado imobiliário e Fundos Imobiliários a quantia de: %.2f\n", realEstate);
	printf("Você tem que reservar para investimentos de renda fixa de liquidez rápida e Fundos de Investimento em Renda Fixa a quantia de: %.2f\n", caixa);
	printf("Você tem que reservar para  Ações no exterior, BDRs, ETFs, Fundos Cambiais e Fundos de Investimento no Exterior a quantia de: %.2f\n", ativosInter);
		 	
 	printf("\nFim do programa!\n\n");
 	system("PAUSE");
}