#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float x, y, z;
	int op;
	
	do{
		printf("Digite um valor para x:");
		scanf("%f", &x);
		
		printf("Digite um valor para y:");
		scanf("%f", &y);
		
		printf("Digite um valor para z:");
		scanf("%f", &z);
		
		if(x>y&&x>z)
			printf("O maior numero eh: %0.1f", x);
		
		else if(y>x&&y>z)
			printf("O maior numero eh: %0.1f", y);
			
		else
		printf("O maior numero eh:%0.1f", z);
		
		
		printf("\nDigite 1 para continuar:");
		scanf("%d", &op);
	}
	
	while(op==1);
	
	
	system("pause");
}
