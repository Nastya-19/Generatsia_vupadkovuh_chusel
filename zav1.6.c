#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double mas [100];
	int i;
	double a, b;
	printf("Vvedite a:");
	scanf("%lf", &a);
	printf("Vvedite b:");
	scanf("%lf", &b);
	
	srand(time(0));
	
	for (i = 0; i < 10; i++){
		mas [i] = ((float)rand()/RAND_MAX)*(b - a) + a;
		printf ("\t mas [%d] = %.1lf\n", i, mas[i]);
	}
	return 0;
}
