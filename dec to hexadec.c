#include<stdio.h>
#include<string.h>
char *t(int n)
{
	static int rem;
	static int i;
	static char hex[100];
	if (n!=0)
	{
	rem=n%16;
	if(rem<10)
	{
		hex[i++]=rem+48;
	}
	else
	hex[i++]=rem+55;
	t(n/16);
    }
    else
    return hex;
}

int main()
{
	char *h;
	int n;
	printf("Enter the dec number:");
	scanf("%d",&n);
	h=t(n);
	printf("%s",strrev(h));
}

//Dec to Ter
