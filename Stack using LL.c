#include<stdio.h>
#include<stdlib.h>
//CSE-19-40


struct node {
	int data;
	struct node *next;
};
struct node *top=0;

void push()
{
	int a;
	struct node *n;
	n=(struct node*)malloc(sizeof(struct node));
	printf("Enter the elemenet you want to push: ");
	scanf("%d", &a);
	n->data=a;
	n->next=top;
	top=n;
}
void pop()
{
	struct node *temp;
	temp=top;
	if(top==0)
	{
		printf("Stackoverflow");
	}
	else
	{
		printf("Item you poped is %d\n",top->data);
		top=top->next;
		free(temp);
	}
}
void peep()
{
	if(top==0)
	{
	printf("Stack empty");
	}
	else
	printf("Top element is %d\n",top->data);
}
void view()
{
	struct node *i;
	i=top;
	if(top==0)
	{
		printf("Stack empty");
	}
	else
	while(i!=NULL)
	{
	printf("%d ", i->data);
	i=i->next;
    }
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
		push();
		}
		else if(ch==2)
		{
			pop();
		}
		else if(ch==3)
		{
			peep();
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
