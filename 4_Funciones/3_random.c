/*
	Juan Victor 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	/* imprime numero al azar*/
	int num;
	srand(time(NULL));
	printf("a- %d\n",  rand() % 2 + 1);
	printf("b- %d\n",  rand() % 100 + 1);
	printf("c- %d\n",  rand() % 10 );
	printf("d- %d\n",  rand() % 112 + 1000);
	printf("e- %d\n",  rand() % 3 - 1);
	printf("f- %d\n",  rand() % 15 -3);


	return 0;
}
