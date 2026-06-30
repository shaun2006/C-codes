#include <stdio.h>

void while1(){
	int i = 10;
	
	while(i < 10){
		printf("while: i is %d \n", i);
		i++;
	}
}

void do_while(){
	int i = 10;

	do{
		printf("do-while: i is %d \n", i);
		i++;
	}while(i < 10);
}

int main()
{
	while1();
	do_while();
	printf("All done :) \n");
}

