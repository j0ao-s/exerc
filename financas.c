#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	//mudan�a de idioma
	setlocale(LC_ALL, "Portuguese");
	
	//declara��o de vari�veis
	float salario, custoFixo, lazer, investimento, caixa, acoesBr, realEstate, ativosInter;
	
	printf("Este software vai te ajudar a investir!\n");
	
	//entrada de dados
	printf("Digite o valor do seu s�lario: ");
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
 	printf("\nVoc� tem que reservar esta quantia em dinheiro para custos fixos necess�rios: %.2f\n", custoFixo);
 	printf("Voc� tem que reservar esta quantia em dinheiro para o lazer: %.2f\n", lazer);
 	printf("Voc� tem que reservar esta quantia em dinheiro para os investimentos: %.2f\n\n", investimento);
 	
 	printf("Vamos ajudar voc� � investir os %.2f que ser�o reservados.\n\n", investimento);
 	
 	printf("Voc� tem que reservar para a��es brasileiras, ETF's e fundos multimercados/a��es a quantia de: %.2f\n", acoesBr);
	printf("Voc� tem que reservar para investimentos em geral no mercado imobili�rio e Fundos Imobili�rios a quantia de: %.2f\n", realEstate);
	printf("Voc� tem que reservar para investimentos de renda fixa de liquidez r�pida e Fundos de Investimento em Renda Fixa a quantia de: %.2f\n", caixa);
	printf("Voc� tem que reservar para  A��es no exterior, BDRs, ETFs, Fundos Cambiais e Fundos de Investimento no Exterior a quantia de: %.2f\n", ativosInter);
		 	
 	printf("\nFim do programa!\n\n");
 	system("PAUSE");
}