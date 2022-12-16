//Elena Germenà 1000045879

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 50

struct città {
char nome[31];
float temperatura;
 };

int main() {
	int n;
	int ctmax=0, ctmin=0; //indice delle città con T max e T min
	float tm; //temperatura media
	int sommat=0; //somma temperature
	struct città città[N];

	printf("quante citta' vuoi inserire?\n");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("inserisci nome citta'\n");
		scanf("%s", città[i].nome);
		printf("inserisci temperatura citta'\n");
		scanf("%f", &città[i].temperatura);

	}

	//città con tmax e tmin 
	float tmax=città[0].temperatura, tmin = città[0].temperatura;
	for (int i = 0; i < n; i++) {
		if (tmax < città[i].temperatura) {
			tmax = città[i].temperatura;
			ctmax = i;

		}

		if (tmin > città[i].temperatura) {
			tmin = città[i].temperatura;
			ctmin = i;
		}
	}
	printf("\n\nla citta' con la temperatura piu' alta e' %s con %.2f gradi\n", città[ctmax].nome, città[ctmax].temperatura);
	printf("la citta' con la temperatura piu' bassa e' %s con %.2f gradi\n", città[ctmin].nome, città[ctmin].temperatura);


	//calcolo t media 
	for (int i = 0; i < n; i++) {
		sommat += città[i].temperatura;
	}
	tm = (float)sommat / n;

	//elenco città con t + alta di media
	printf("\n\ncitta' con temperatura maggiore della media:\n");
	for (int i = 0; i < n; i++) {
		if (città[i].temperatura > tm) { printf("%s con %.2f gradi\n", città[i].nome, città[i].temperatura); }
	}

	


}
