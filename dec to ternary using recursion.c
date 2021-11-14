#include<stdio.h>
int t(int n)
{
	int a;
	if (n==0)
	{
		return 0;
	}
	else
	return ((n%3)+10*t(n/3));
}

int main()
{
	int n;
	n=100;
	printf("%d",t(n));
}

//Dec to Ter
