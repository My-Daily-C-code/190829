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

	fputs("�ֹε�� ��ȣ �� 6�ڸ� �Է�: ", stdout);
	fgets(perID, sizeof(perID), stdin);
	ClearLineFromReadBuffer(); // �Է� ���� ����

	fputs("�̸� �Է�: ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("�ֹι�ȣ: %s\n", perID);
	printf("�̸�: %s\n", name);

	return 0;
}

// �Է� ���ۿ� �����ִ� \n�� ���������� ������ ���� ���� ���������� ������� �̷�����.
// ���α׷� ����ڰ� �� �� �Է��ص�, �ʿ��� ��ŭ�� �о� ���̰�, �������� ���������� ������ ������ ���̴� �ٿ� ���� ���������� �۵��Ѵ�. 