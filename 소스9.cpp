/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char word[1000000];
	scanf("%[^\n]", word);//\n�� ���ö����� ������ �����Ͽ� �д´�

	int n=strlen(word);//���ڿ��� ����
	int count = 0;

	if (n == 1 && word[0] == ' ') {//���ڿ� ���̰� 1�̰� ������ ó���̸� 0���
		printf("0\n");
		return 0;
	}

	for (int i = 1; i < n-1; i++) {//ó���� �� ���� ����
		if (word[i] == ' ')
			count++;

	}
	printf("%d", count+1);
	return 0;
}*/