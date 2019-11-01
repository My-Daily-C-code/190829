// 입출력 이외의 문자열 관련 함수
// RemoveBSN.c

#include <stdio.h>
#pragma warning (disable: 4996)

void RemoveBSN(char str[])
{
	int len = strlen(str);
	str[len - 1] = 0;
}

int main()
{
	char str[100];
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	printf("길이: %d, 내용: %s\n", strlen(str), str);

	RemoveBSN(str);
	printf("길이: %d, 내용: %s\n", strlen(str), str);
	return 0;
}