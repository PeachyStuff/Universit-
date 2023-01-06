#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*Scrivere un programma che contenga le seguenti funzioni ed un opportuno main con un menù per
invocarle:
- Una funzione che permetta di leggere da input un vettore di interi
- una funzione avente come parametro in ingresso un vettore di interi che restituisca la somma
degli elementi del vettore;
- una funzione avente come parametro in ingresso un vettore di interi che restituisca il massimo
degli elementi del vettore;
- una funzione avente come parametro in ingresso un vettore di interi che restituisca il minimo
degli elementi del vettore;
- una funzione avente come parametro in ingresso un vettore di interi che restituisca la media
degli elementi del vettore;*/

int leggivettore(int v[], int dim) {
	for (int i = 0; i < dim; i++) {
		printf("inserisci elemento %d del vettore: ", i);
		scanf("%d", &v[i]);
	}
}

int sommaelementi(int v[], int dim) {
	int s = 0;
	for (int i = 0; i < dim; i++) {
		s += v[i];
	}
	return s;
}

int massimo(int v[], int dim) {
	int m;
	for (int i = 1; i < dim; i++) {
		if (i == 1) m = v[i - 1];
		if (m < v[i]) { m = v[i]; }
	}
	return m;
}
int minimo(int v[], int dim) {
	int m;
	for (int i = 1; i < dim; i++) {
		if (i == 1) m = v[i - 1];
		if (m > v[i]) { m = v[i]; }
		
	}
	return m;
}

float media(int v[], int dim) {
	int s=0, c=0;
	float m;
	for (int i = 0; i < dim; i++) {
		c++;
		s += v[i];
	}
	m = (float)s / c;
	return m;
}


int main() {
	int n;
	int s[10];
	int dim;
	int sum;
	int max, min;
	float med;
	

	do {
		printf("\n\nscegli un'azione: \n1) leggere un vettore\n2) somma degli elementi del vettore\n3) massimo degli elementi del vettore\n4) minimo degli elementi del vettore\n5) media degli elementi del vettore\n0 per uscire\n\n");

		scanf("%d", &n);

		switch (n) {
		case 1:
			printf("di quanti elementi vuoi fare il vettore?\n");
			scanf("%d", &dim);
			leggivettore(s, dim);
			break;

		case 2:
			sum = sommaelementi(s, dim);
			printf("la somma degli elementi e': %d", sum);
			break;

		case 3:
			max = massimo(s, dim);
			printf("il massimo e' %d", max);
			break;

		case 4:
			min = minimo(s, dim);
			printf("il minimo e' %d", min);
			break;

		case 5:
			med = media(s, dim);
			printf("la media e' %.2f", med);
			break;

		}
	} while (n != 0);
	
	

}
