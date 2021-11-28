#include<stdio.h>
int t(int n)
{
	if (n==0)
	{
		return 0;
	}
	else
	return ((n%7)+10*t(n/7));
}

int main()
{
	int n;
	printf("Enter the dec number:");
	scanf("%d",&n);
	printf("%d",t(n));
}

//Dec to base 7
