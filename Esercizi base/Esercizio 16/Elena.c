#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE  
#define _CRT_NONSTDC_NO_DEPRECATE

#include <stdio.h>

int main(void) {
	int N, num, x, x2, lung, lung1, lung2, D;
	D = 0;
	lung = 1;
	lung1 = 0;
	lung2 = 0;

	/*chiede lunghezza sequenza*/
	do {
		printf("inserisci valore di N intero positivo\n");
		scanf("%d", &N);
	} while (N <= 0);

	/*chiede di scrivere sequenza*/
	for (int i = 0; i < N; i++) {
		printf("inserisci un valore della sequenza\n");
		scanf("%d", &num);

		/*se il numero inserito è uguale al numero precedente, lunghezza aumenta di 1 (il valore iniziale è 1*/
		if (num == D) {
			/*riporto al parametro iniziale il valore lung, perchè inizia una nuova sequenza*/
			if (lung > 1 && lung1 > 0) lung = 1;
			
			/*azzero la lunghezza di due cifre diverse*/
			lung1 = 0;

			lung += 1;
			x = num;
			/*identificare sequenza + lunga*/
			if (lung2<lung) {
				lung2 = lung;
				x2 = x;
			}
		}
		/*contatore per numeri non simili in sequenza*/
		else {
			lung1 += 1;
			
		}



		/*memorizza il valore del numero appena digitato*/
		D = num;
	}
	printf("la lunghezza dell'ultima sequenza è %d\nil numero che si ripete è %d\n", lung, x);
	printf("la lunghezza della sequenza più lunga è %d\nil numero che si ripete è %d\n", lung2, x2);


}
