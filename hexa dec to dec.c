#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char h[17];
	int len,i;
	long long dec, val;
	dec=0;
	printf("Enter the hexdec number:");
	gets(h);
	len=strlen(h);
	len--;
	for(i=0;h[i]!='\0';i++)
	{
	if(h[i]>='0' && h[i]<='9')
	{
		val=h[i]-48;
	}
	else if(h[i]>='A' && h[i]<='F')
	{
		val=h[i]-65+10;
	}
	else if(h[i]>='a' && h[i]<='f')
	{
		val=h[i]-97+10;
	}
	dec+=val*pow(16, len);
	len--;
    }
	printf("Decimal number=%lld",dec);
}

