// ǥ�� ����°� ����
// NeedInputButFlush

#include <stdio.h>
#pragma warning (disable: 4996)

int main()
{
	char perID[7];
	char name[10];

	fputs("�ֹι�ȣ �� ��6�ڸ� �Է�: ", stdout);
	fgets(perID, sizeof(perID), stdin);

	fputs("�̸� �Է�: ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("�ֹι�ȣ: %s\n", perID);
	printf("�̸�: %s\n", name);

	return 0;
}
// \n���� ���� �о������ ������ �̸��� �Է� �� ��ȸ�� ���� 
// ���� �������� �̾ Ȯ��