#include <stdio.h>
#pragma warning (disable: 4996)
#define _SECURE_NO_WARNNIGNS

int main()
{
	char * str = "Simple String";
	
	printf("1. puts test -----\n");
	puts(str);
	puts("So Simple String");

	printf("2. fputs test -----\n");
	fputs(str, stdout); printf("\n");
	fputs("So Simple String, stdout"); printf("\n");
	return 0;
}