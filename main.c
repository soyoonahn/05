#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int i,trial = 0;
	int answer = 59;
	
	do
	{
		printf("input a numeber:");
		scanf("%i", &i);
		if (i<answer)
			printf("low!\n");
		else if (i>answer)
			printf("high!\n");
		trial++;
	} while (i!= answer);

	printf("congratulation! number of trial: %i\n", trial);

	return 0;
}
