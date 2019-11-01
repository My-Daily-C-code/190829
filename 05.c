// 표준 입출력과 버퍼
// NeedInputButFlush

#include <stdio.h>
#pragma warning (disable: 4996)

int main()
{
	char perID[7];
	char name[10];

	fputs("주민번호 앞 자6자리 입력: ", stdout);
	fgets(perID, sizeof(perID), stdin);

	fputs("이름 입력: ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("주민번호: %s\n", perID);
	printf("이름: %s\n", name);

	return 0;
}
// \n까지 같이 읽어버리기 때문에 이름을 입력 할 기회가 없다 
// 다음 예제에서 이어서 확인