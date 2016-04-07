#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mas [100];
	int h, i, c;
	printf ("Vvedite chislo h:");
	scanf("%d", &h);
	
	srand(time(0));
	
	for (i = 0;i < h; i++){
		mas [i] = rand() %100;
		printf("\t mas [%d] = %d\n", i, mas[i]);
	}
	return 0;
}
