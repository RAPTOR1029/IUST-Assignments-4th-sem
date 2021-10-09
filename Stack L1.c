#include<stdio.h>
#include<stdlib.h>
#define max 2
//CSE-19-40

int stack[max];
int top=-1;
int push(int a)
{
	if(top<max-1)
	{
		stack[++top]=a;
	}
	else
	printf("Stackoverflow");
}
int pop()
{
	if(top==-1)
	{
		printf("Stackoverflow");
	}
	else
	{
		return stack[top--];
	}
}
int peep()
{
	if(top==-1)
	{
		printf("Stack empty");
	}
	else
	return stack[top];
}
void view()
{
	int i;
	if(top==-1)
	{
		printf("Stack empty");
	}
	else
	for(i=top;i>=0;i--)
	printf("%d ", stack[i]);
}
int main()
{
	int ch, item;
	while(1)
	{
		printf("Enter 1 for push, 2 for pop, 3 for peep, 4 for view, 5 for exit: ");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("Enter the number you want to push: ");
			scanf("%d",&item);
			push(item);
			printf("\n");
		}
		else if(ch==2)
		{
			printf("Item you want to pop is %d",pop());
			printf("\n");
		}
		else if(ch==3)
		{
			printf("Top element is %d",peep(item));
			printf("\n");
		}
		else if(ch==4)
		{
			view();
			printf("\n");
		}
		else 
		break;
		
	}
}
