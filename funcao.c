#include<stdio.h>
#include"funcao.h"

int tipoDePagamento(int a, float b, int c, float valor, float d, float p, float s){

	switch(a){
		case 1:
			b = valor;
			printf("O valor pago ser\xa0 de R\x24%.2f\n", b);
			printf("Senha: ");
			scanf("%d", &s);
			break;
		case 2:
			if(valor<200){
				b = valor;
				d = c;
				p = b / d;
				printf("O valor pago ser\xa0 de R\x24%.2f\n", b);
				printf("Senha: ");
				scanf("%d", &s);
				break;
			}
			else{
				printf("A compra ser\xa0 paga em quantas parcelas: ");
				scanf("%d", &c);
				
				if(c<=2 && c>0){
				b = valor;
				d = c;
				p = b / d;
				printf("O valor pago ser\xa0 de R\x24%.2f\n", b);
				printf("Cada parcela ficar\xa0 no valor de R\x24%.2f\n",p);
				printf("Senha: ");
				scanf("%d", &s);
				}
				else if(c<=8){
				b = valor + (valor*10/100);
				d = c;
				p = b / d;
				printf("O valor pago ser\xa0 de R\x24%.2f\n", b);
				printf("Foi cobrado juros de 10%%\n");
				printf("Cada parcela ficar\xa0 no valor de R\x24%.2f\n",p);
				printf("Senha: ");
				scanf("%d", &s);
				}
				else{
				printf("N\x84o \x82 poss\xa1vel vender para essa quantidade de parcelas ");
				}
			break;
		}
		default:
			printf("Essa opi\x87\x84o n\x84o esta dispon\xa1vel.");
			break;	
			
	}
}
