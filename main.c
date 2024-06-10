#include<stdio.h>
#include"funcao.h"



int main(){
	int a = 0;
	float b = 0;
	int c = 0;
	float valor = 0;
	float d = 0;
	float p = 0;
	int s = 0;
	printf("[1] Vender \n");
	printf("Digite aqui a op\x87\x84o: ");
	scanf("%d", &a);
	switch(a){
		case 1:
			printf("Qual o valor da conta: R\x24 ");
			scanf("%f", &valor);
			printf("Qual a forma de pagamento:\n");
			printf("[1]Cart\x84o de D\x82\x62ito\n[2]Cart\x84o de Cr\x82\x64ito\nDigite aqui a op\x87\x84o: ");
			scanf("%d", &a);
			tipoDePagamento(a, b, c, valor, d, p, s);
			break;
	}
}
