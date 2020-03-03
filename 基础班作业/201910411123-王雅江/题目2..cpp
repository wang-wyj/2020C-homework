#include<stdio.h>
int main(void)
{
	int n, nSum = 1;
	scanf_s("%d", &n);
	for (int n1 = 1, n2 = n1; n1 <= n / 2;)
	{
		if (nSum < n)
		{
			n2++;
			nSum += n2;
		}
		else if(nSum > n)
		{
			nSum -= n1;
			n1++;
		}
		else
		{
			for (int t = n1; t <= n2; t++)
			{
				printf("%d,", t);
			}
			printf("\n");
			n2++;
			nSum += n2;
		}
	}
	return 0;
}
