// ReadingString.c
#include <stdio.h>
#pragma warning (disable: 4996)

int main()
{
	char str[7];
	int i;

	for (i = 0; i < 3; i++)
	{
		fgets(str, sizeof(str), stdin);
		printf("Read%d: %s\n", i + 1, str);
	}

	return 0;
}

// 위 예제 11행의 printf함수 호출 문에는 개형을 의미하는 \n이 하나 삽입 되어 있다. 
// 그런데 위의 실행 결과를 보면 문장이 출력 될때 마다 개행이 두 번 이뤄졌음을 알 수 있다.
// fgets 함수는 \n을 만날 때 마다까지 문자열을 읽어 들이는 데 ".\n응ㄹ 제외 시키거나 버리지 않고 문자열의 일부로 받아들인다."
// 쉽게 말해 입력한 엔터 키의 정보까지도 문자열의 일부로 저장 되는 것이다.
// 그래서 11행의 printf 함수 호출 시 문자열의 일부로 저장된 \n에 의해서 한번, 그리고 printf함수 호출문에 삽인 된 \n에 의해서 또 한번 개형이 이뤄지는 것이다. 