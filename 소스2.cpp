/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char word[101] = {0};
	scanf("%s", &word);

	for (int i = 97; i <= 122; i++)//�ƽ�Ű �ڵ忡�� ���ĺ� ���ڹ���
	{
		int count = 0;
		
		for (int j = 0; word[j] != NULL; j++)//���鹮�������� �ݺ�
		{
			if (word[j] == i)
			{
				printf("%d", j);
				count++;//���������� ���ĺ��˻��ϸ鼭 ����
				break;
			}
				
		}
		if (count == 0)
			printf("-1");
	}

	return 0;
}*/