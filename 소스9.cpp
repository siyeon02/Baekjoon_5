/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char word[1000000];
	scanf("%[^\n]", word);//\n이 나올때까지 공백을 포함하여 읽는다

	int n=strlen(word);//문자열의 길이
	int count = 0;

	if (n == 1 && word[0] == ' ') {//문자열 길이가 1이고 공백이 처음이면 0출력
		printf("0\n");
		return 0;
	}

	for (int i = 1; i < n-1; i++) {//처음과 끝 공백 제거
		if (word[i] == ' ')
			count++;

	}
	printf("%d", count+1);
	return 0;
}*/