#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*Scrivere un programma in linguaggio C che, dato un numero intero positivo N inserito da tastiera,
calcoli e visualizzi i numeri interi divisori di N.
Dire inoltre se N è un numero primo.
Suggerimento.
• Un numero M è divisore di un numero N se il resto della divisione tra N ed M è uguale a zero.
• Un numero è primo se è divisibile solo per 1 o per il numero stesso

I: n
O: divisori interi
n numero primo?

*/

int main() {
	int n;
	int d;
	int nd = 0;
	printf("inserisci un numero intero positivo\n");
	scanf("%d", &n);

	
	//il -1 serve a non contare il primo numero(n)
	for (int i = n-1; i > 1; i--) {
		if (n % i == 0) {
			d = i;
			printf("%d è divisore di %d\n", d, n);
		}
		

	}
	if (nd == 0) printf("%d è un numero primo\n", n);


}
