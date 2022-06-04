#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int q = 0;
	while ((scanf("%d", &q)) != EOF)
	{
		if (q >= 60)
		{
			printf("Pass\n");
		}
		else
		{
			printf("Fail\n");
		}
	}
	return 0;
}