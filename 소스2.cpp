/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char word[101] = {0};
	scanf("%s", &word);

	for (int i = 97; i <= 122; i++)//아스키 코드에서 알파벳 숫자범위
	{
		int count = 0;
		
		for (int j = 0; word[j] != NULL; j++)//공백문자전까지 반복
		{
			if (word[j] == i)
			{
				printf("%d", j);
				count++;//순차적으로 알파벳검사하면서 증가
				break;
			}
				
		}
		if (count == 0)
			printf("-1");
	}

	return 0;
}*/