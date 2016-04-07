#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mas [100];
	int i, a, b;
	printf("Vvedite a:");
	scanf("%d", &a);
	printf("Vvedite b:");
	scanf("%d", &b);
	
	srand(time(0));
	
	for (i = 0; i < 10; i++ ){
		mas [i] = (rand()%(b - a)) + a;
		printf("\t mas [%d] = %d\n", i, mas[i]);
	}
	return 0;
}
