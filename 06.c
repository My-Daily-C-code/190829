// InputButFlush.c 

#include <stdio.h>
#pragma warning (disable: 4996)

void ClearLineFromReadBuffer()
{
	while (getchar()!= '\n');
}


int main()
{
	char perID[7];
	char name[10];

	fputs("주민등록 번호 앞 6자리 입력: ", stdout);
	fgets(perID, sizeof(perID), stdin);
	ClearLineFromReadBuffer(); // 입력 버퍼 비우기

	fputs("이름 입력: ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("주민번호: %s\n", perID);
	printf("이름: %s\n", name);

	return 0;
}

// 입력 버퍼에 남아있는 \n을 지워버리기 때문에 위와 같이 정상적으로 입출력이 이뤄진다.
// 프로그램 사용자가 잘 못 입력해도, 필요한 만큼만 읽어 들이고, 나머지는 지워버리기 때문에 위에서 보이는 바와 같이 정상적으로 작동한다. 