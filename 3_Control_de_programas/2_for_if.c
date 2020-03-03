/*
	Juan Victor 
*/

#include <stdio.h>

int main(void)
{
	
	int  i, suma = 0; 

	for (i = 1; i <= 30; ++i)
	{
		if (i % 2 == 0)
		{
			suma = suma + i;
			printf("i= %d\n",i );
			printf("suma= %d\n",suma );
		}
		
	}

	printf("la suma de los pares del 2 al 30 es= %d\n", suma );

	return 0;
}