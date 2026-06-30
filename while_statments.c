#include <stdio.h>

void while1(){
	int i = 0;

	while( i < 10){
		printf("hello world, %d \n", i);
		i++;
	}
	
	printf("All done~!\n");
}

void while2(){
	while(1){
		printf("1 is always true so this repeats forever...\n");
	}
}



int main()
{
	while1();
//	while2();

}
