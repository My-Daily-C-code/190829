// Console EOF.c
#include <stdio.h>
#pragma warning (disable: 4996)

int main()
{
	int ch;

	while (1)
	{
		ch = getchar();
		if (ch == EOF)
			break;
		putchar(ch);
	}

	return 0;
}