/* 	***********************************************************	*	
 	*				Andressa Valadares		13/0042943			*
 	*				Trabalho 4 - PAA		2/2017				*	
 	***********************************************************	*
	O programa simula uma relacao de recorrencia no formato:
	T(n) = aT((n/b) – c) + dT((n/e) – f) + f(n)

	O objetivo é medir o tempo total gasto para executar a recursão
	 até a condição de saída que é n<=1		
	 																*/


#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

int a, b, c, d, e, f, g, n; // variaveis da funcao de recorrencia


/*	Simula a recorrencia	*/
int func_t(int n);
/*	Conta o numero de iteracoes de f(n)	*/
int func_f(int n, int g);
/*	Calcula o nivel atual da arvore	*/
/*	*/
/*	*/
/*	*/

int main(int argc, char *argv[]){

	if(argc == 9){
			a = atoi(argv[1]), b = atoi(argv[2]), c = atoi(argv[3]), 
			d = atoi(argv[5]), e = atoi(argv[5]), f = atoi(argv[6]),
			g = atoi(argv[7]), n = atoi(argv[8]);

		// Verifica se os argumentos sao validos	
		if(	(a < 0) || (b < 0) || (c < 0) || (d < 0) || 
			(e < 0) || (f < 0) || (g < 0) || (n < 0)){
			printf("a, b, c, d, e, f, g e n devem ser inteiros positivos\n");

		}
		else{
			// Verifica se o metodo mestre pode ser aplicado
			if ((c == 0) && ((d == 0) || (e == 0))) {
				// calculo metodo mestre
				// tira log de a na base b
				// tirando logaritmo
				// 	logaritimo de a na base b = log(a)/log(b)
				// compara com f(n)
				// se <= caso 1
				// se == caso 2
				// se >= caso 3

				printf("%d\n", (int)log10(10));
			}


	func_t(n);

	return 0;


		}
	}
	else{

		printf("ERROR: Missing arguments\n");

	}

	return 0;

}

int func_t(int n){
	printf("Argumentos:\n");
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	printf("c: %d\n", c);
	printf("d: %d\n", d);
	printf("e: %d\n", e);
	printf("f: %d\n", f);
	printf("g: %d\n", g);

	printf("n: %d\n", n);
	return 0;

}