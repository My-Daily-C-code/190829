// 문자 단위 입출력 함수
#include <stdio.h>
#pragma warning (disable: 4996)

int main()
{
	int ch1, ch2;

	ch1 = getchar(); // 문자 입력
	ch2 = fgetc(stdin); // Enter key 입력

	putchar(ch1); // 문자 출력
	fputc(ch2, stdout); // Enter key 출력

	return 0;
}