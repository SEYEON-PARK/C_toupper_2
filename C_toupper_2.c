#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a = 'a'; // 초기화
	printf("%c의 대문자는 %c입니다.\n", a, toupper(a));

	return 0;
}
