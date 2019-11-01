// 문자열을 복사하는 함수들: strcpym strncpy

#include <stdio.h>
#include <string.h>
#pragma warning (disable: 4996)

int main()
{
	char str1[20] = "1234567890";
	char str2[20];
	char str3[5];

	/* case 1   */

	strcpy(str2, str1);
	puts(str2);

	/* case2 */
	strncpy(str3, str1, sizeof(str3));
	puts(str3);

	/*case 3 */
	strncpy(str3, str1, sizeof(str3) - 1);
	str3[sizeof(str3) - 1] = 0;
	puts(str3);

	return 0;
}