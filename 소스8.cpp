/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char word[101];
	int sum, len;

	len = strlen(word);
	sum = strlen(word);

	scanf("%s", word);

	for (int i = 0; i<len; i++)
	{
		if (word[i] == 'c' || word[i] || 's' || word[i] == 'z') {
			if (word[i + 1] == '=' || word[i + 1] == '-')//그 바로 뒤의 문자열이 ''면 감소
				sum--;
		}
		else if (word[i] == 'n' || word[i] == 'l') {
			if (word[i + 1] == 'j')
				sum--;
		}
		else if (word[i] == 'd') {
			if (word[i + 1] == '-')
				sum--;
			else if (word[i + 1] == 'z' && word[i + 2] == '=')
				sum--;
		}
	}
	printf("%d\n", sum);

	return 0;
}*/

