/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main(void)
{
	int n, m;
	scanf("%d", &n);

	char s[20];
	//���ڿ� �Է�

	for (int i = 0; i < n; i++)
	{
		scanf("%d %s", &m, s);
		//���̽���ŭ �ݺ� �Է�

		for (int j = 0; j < strlen(s); j++)//���ڿ� ���̸�ŭ
		{
			for (int k = 0; k < m; k++)//�Էµ� ���ڸ�ŭ ���ڿ� �ݺ�
			{
				printf("%c", s[j]);
			}
		}
		printf("\n");//���̽� ������ �ٹٲٱ�
	}

	return 0;


}*/