/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char num[15];
	scanf("%s", num);

	int time = 0;
	
	for (int i = 0; num[i] != NULL; i++)
	{
		if (num[i] == 'A' || num[i] == 'B' || num[i] == 'C')//1이 2초 걸리니까 그 옆으로 하나씩 갈때마다 1초씩 더해진다
			time += 3;
		else if (num[i] == 'D' || num[i] == 'E' || num[i] == 'F')
			time += 4;
		else if (num[i] == 'G' || num[i] == 'H' || num[i] == 'I')
			time += 5;
		else if (num[i] == 'J' || num[i] == 'K' || num[i] == 'L')
			time += 6;
		else if (num[i] == 'M' || num[i] == 'N' || num[i] == 'O')
			time += 7;
		else if (num[i] == 'P' || num[i] == 'Q' || num[i] == 'R'||num[i]=='S')
			time += 8;
		else if (num[i] == 'T' || num[i] == 'U' || num[i] == 'V')
			time += 9;
		else if (num[i] == 'W' || num[i] == 'X' || num[i] == 'Y'||num[i]=='Z')
			time += 10;

	}
	printf("%d", time);

	return 0;


}*/