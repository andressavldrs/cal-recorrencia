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

/* Resolve o metodo mestre */
int metodo_mestre(int n);
/*	*/
/*	*/
/*	*/

int main(int argc,char *argv[]){

	if(argc == 9){
			a = atoi(argv[1]), b = atoi(argv[2]), c = atoi(argv[3]), 
			d = atoi(argv[4]), e = atoi(argv[5]), f = atoi(argv[6]),
			g = atoi(argv[7]), n = atoi(argv[8]);
			printf("a:%d, b:%d, c:%d, d:%d, e:%d, f:%d, g:%d, n:%d\n", 
				a, b, c, d, e, f, g, n);
		// Verifica se os argumentos sao validos	
		if(	(a < 0) || (b < 0) || (c < 0) || (d < 0) || 
			(e < 0) || (f < 0) || (g < 0) || (n < 0)){
			printf("a, b, c, d, e, f, g e n devem ser inteiros positivos\n");

		}
		else{

			metodo_mestre(n);
			func_t(n);
		}
	}
	else{

		printf("ERROR: Missing arguments\n");

	}

	return 0;

}

/*	Simula a recorrencia	
	T(n) = aT((n/b) – c) + dT((n/e) – f) + f(n)


*/
int func_t(int n){
	int cont1, cont2;

	if (n<=1) return 0;
	n--;
	// faz a chamadas de (n/b-c)
	for(cont1=1; cont1<=a; cont1++)
		func_t((n/b-c));

	// faz d chamadas de (n/e-f)
	for(cont2=1; cont2<=a; cont2++)
		func_t((n/e-f));

	return 0;

}

/*	Conta o numero de iteracoes de f(n)	
	Entrada: n -> valor 
			 g -> expoente
	Saida:	retona n^g 					*/
int func_f(int n, int g){
	//int i;
	
	//for(i=0; i<=g; i++)
	//	for(j=0; j<=n; j++);

	return pow(n,g);		
}

int metodo_mestre(int n){
	int x = (log2(a)/log2(b));
	// Verifica se o formato da recorrencia
	if((c == 0) && (d == 0)){
		printf("T(n) = %dT(n/%d) + n^%d\n", a, b, g);
		printf("b = %d, a = %d, f(n) = n^%d\n", b, a, g);
		printf("Log de %d na base %d = %d\n", a, b, x);
		// Caso 1
		if(g <= (log2(a-1)/log2(b))){
			printf("f(n) = n^%d = O(n^%d-e), para e=1 -> Caso 1\n", g, x);
			printf("T(n) = Teta(n^%d)\n", x);

		}// Caso 2
		else if(g == x){
			printf("f(n) = n^%d = Teta(n^%d-e) -> Caso 2\n", g, x);
			printf("T(n) = Teta(n^%d log n)\n", x);

		}// Caso 3
		else if((g >= log2(a+1)/log2(b)) && ((a*func_f(n/b, g))/func_f(n, g) < 1)){
			
			printf("f(n) = n^%d = Omega(n^%d+e), para e=1 -> Caso 3\n", g, x);
			printf("T(n) = Teta(n^%d)\n", g);
		}
	}
	else{
		printf("O método mestre não pode ser aplicado neste caso\n");

	}

	


return 0;
}
