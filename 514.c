
/*
gcc -O2 -Wall -o514 514.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));

	printf("a- %d\n",  (rand() % 5 + 1)*2);
	printf("b- %d\n",  (rand() % 5 + 2)*2+1);
	printf("c- %d\n",  (rand() % 5 + 1)*4+2);



	return 0;
}