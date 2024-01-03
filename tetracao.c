//Programa para calcular a tetração de um número qualquer.
//Por exemplo: 10 "elevado" a 3, não é elevado ao cubo, é diferente, ele calcula (10^10)^10
//2 "elevado" a 4 -> ((2^2)^2)^2 e assim sucessivamente. 
//Para compilar o código: gcc programa.c -o programa -lpthread -lm
#include <stdio.h>
#include <math.h>
#include <pthread.h>

#define N 1
#define BASEMAX 10
#define ITERACAOMAX 6
#define e 2.7182

pthread_t thread;

int i = 0;

double tetracao(double base, int iteracao) //Calcula o valor da base N vezes.
{
	int i;
	int n = base;	
	for (i = 0;i<(iteracao-1); i++)
	{
		base = pow(base,n);
	}
	return base;
}

void funcao_thread() //Funcao referente à thread criada.

{
	int j;
	double base = 1.00;
	double potencia = 0;
	for(i;i<BASEMAX;i++)
	{
		for (j = 1;j<(ITERACAOMAX); j++)
		{
			potencia = tetracao(base,j);
			printf("Tetração de %.lf em %d é: %.4lf\n",base,j,log10(potencia));	
			usleep(100000);
		}
		base = base + 1.00;
	}
}

int main()

{
	pthread_create(&thread,NULL,&funcao_thread,NULL);
	pthread_join(thread,NULL);
	printf("\n\n\n");
	return 0;
}
