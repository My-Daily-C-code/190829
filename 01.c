// ���� ���� ����� �Լ�
#include <stdio.h>
#pragma warning (disable: 4996)

int main()
{
	int ch1, ch2;

	ch1 = getchar(); // ���� �Է�
	ch2 = fgetc(stdin); // Enter key �Է�

	putchar(ch1); // ���� ���
	fputc(ch2, stdout); // Enter key ���

	return 0;
}