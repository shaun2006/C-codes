#include <stdio.h>
#include <stdlib.h>


int main(void){
	unsigned seed;
	int r;
	printf("Enter a seed value: ");
	scanf("%u", &seed);
	srand(seed);
	printf("\n");
	do{
		r = rand() % 100;
		printf("the randon number is: %d \n", r);
	} while (r != 67);

	printf("All done :)...\n");

}
