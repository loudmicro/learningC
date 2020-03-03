/*
	Juan Victor 
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){

	char str[20] = "";
	fgets(str,10,stdin);

	// Returns first token
	char* token = strtok(str, " .,-_¿?¡!");

	// Keep printing tokens while one of the
	// delimiters present in str[].
	while (token != NULL) {
		printf("%s\n", token);
		token = strtok(NULL, "-");
	}

	return 0;
}
