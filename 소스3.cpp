/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main(void)
{
	int n, m;
	scanf("%d", &n);

	char s[20];
	//문자열 입력

	for (int i = 0; i < n; i++)
	{
		scanf("%d %s", &m, s);
		//케이스만큼 반복 입력

		for (int j = 0; j < strlen(s); j++)//문자열 길이만큼
		{
			for (int k = 0; k < m; k++)//입력된 숫자만큼 문자열 반복
			{
				printf("%c", s[j]);
			}
		}
		printf("\n");//케이스 끝나면 줄바꾸기
	}

	return 0;


}*/