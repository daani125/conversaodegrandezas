#include <stdio.h>

int main()
{
	int r, p, v, i; 
	int esc, res;
	
	printf("Qual grandeza voce deseja descobrir? \n\n");
	printf("1 - Potencia \n");
	printf("2 - Resistencia \n");
	printf("3 - Tensao \n");
	printf("4 - Corrente \n");
	scanf("%d", &esc);
	
	switch(esc)
	{
		
		case 1:
		 //Calcular Potência  
		    printf("Digite a tensao \n\n");
		    scanf("%d", &v);
			printf("Digite a corrente \n\n");
			scanf("%d", &i);
			
			p=v*i;
			
			printf("O valor da potencia e: %d\n\n", p);
			
			break;
			
		case 2: 
		 //Calcular Resistência
			printf("Digite a tensao \n\n");
		    scanf("%d", &v);
			printf("Digite a corrente \n\n");
			scanf("%d", &i);
			
			r=v/i;
			
			printf("O valor da resistencia e: %d\n\n", r);
			
			break;
		
		
		case 3: 
		 //Calcular Tensão 2
			printf("Voce tem o valor da resistencia? \n\n ");
			printf("1 - Sim\n");
			printf("2 - Nao\n");
			scanf("%d", &res);
			
		
		if(res==1)
		{
		
			printf("Digite a resistencia \n");
		    scanf("%d", &r);
			printf("Digite a corrente \n\n");
			scanf("%d", &i);
			
			v=r*i;
			
			printf("O valor da tensao e: %d\n\n", v);
		}	
		
		else
		{
			printf("Digite a resistencia \n\n");
		    scanf("%d", &r);
			printf("Digite a corrente \n\n");
			scanf("%d", &i);
			
			v=p/i;
			
			printf("O valor da tensao e: %d\n\n", v);
			}	
			break;	
			
			
		case 4: 
		 //Corrente 2

			printf("Voce tem o valor da resistencia? \n\n ");
			printf("1 - Sim\n");
			printf("2 - Nao\n");
			scanf("%d", &res);
			
		
		if(res==1)
		{
		
			printf("Digite a resistencia \n");
		    scanf("%d", &r);
			printf("Digite a tensao \n\n");
			scanf("%d", &v);
			
			i=p*v;
			
			printf("O valor da corrente e: %d\n\n", i);
		}	
		
		else
		{
			printf("Digite a tensao \n\n");
		    scanf("%d", &v);
			printf("Digite a  potencia \n\n");
			scanf("%d", &p);
			
			i=v/p;
			
			printf("O valor da corrente e: %d\n\n", i);
			}	
			break;	
			
				
	}
	return 0;
}
