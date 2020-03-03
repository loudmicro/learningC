/*
	Juan Victor 
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void quita_cr(char *s, int t);

int main(void)
{

	char num1[5], num2[5], num3[5], num4[5] ;

	printf("Introduce el primer numero\n");
	fgets(num1,5,stdin);
	printf("Introduce segundo numero\n");
	fgets(num2,5,stdin);
	printf("Introduce tercer numero\n");
	fgets(num3,5,stdin);
	printf("Introduce cuarto numero\n");
	fgets(num4,5,stdin);

	quita_cr(num1,5);
	quita_cr(num2,5);
	quita_cr(num3,5);
	quita_cr(num4,5);

	printf("la suma de %s + %s + %s + %s es: %d\n",num1, num2, num3, num4,atoi(num1)+atoi(num2)+atoi(num3)+atoi(num4) );


	return 0;
}

void quita_cr(char *s, int t){
	int i;
	for ( i = 0; i < t; ++i)
	{
		if (s[i]=='\n')
		{
			s[i]=32;
		}
	}
}