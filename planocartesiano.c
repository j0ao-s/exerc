#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

main()
{
       setlocale(LC_ALL, "Portuguese");
	
	   float dist, x1, x2, y1, y2;
	   
	   printf("Digite o valor de x1: ");
	   scanf("%f", &x1);
	   printf("Digite o valor de x2: ");
	   scanf("%f", &x2);
	   printf("Digite o valor de y1: ");
	   scanf("%f", &y1);
	   printf("Digite o valor de y2: ");
	   scanf("%f", &y2);	
	   
	   dist=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	   
	   printf("\n\nO valor da dist�ncia no plano cartesiano �: %.2f", dist);
	   
	   printf("\n\nO fim do programa\n\n");
	   
	   system("PAUSE");	   
}