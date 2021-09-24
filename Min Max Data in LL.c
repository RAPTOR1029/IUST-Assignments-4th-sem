#include<stdio.h>
//CSE-19-40 YOUNIS!
#include<stdlib.h>
 
struct Node {
    int data;
    struct Node* next;
};struct Node *head=NULL, *tail=NULL;
void create()
{
	int i,n;
	struct Node *temp;
	printf("Enter the number of nodes: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		temp=(struct Node*)malloc(sizeof(struct Node));
		printf("Enter Data: ");
		scanf("%d", &temp->data);
		temp->next= NULL;
		if(head==NULL)
		{
			head=temp;
			tail=temp;
		}
		else
		{
		tail->next=temp;
		tail=temp;}
	}
}
void view()
{
	struct Node *q;
	printf("Data :");
	q=head;
	while(q!=NULL)
	{
		printf("%d\t",q->data);
		q=q->next;
	}
}

void min()
{
	struct Node *a;
	int min;
	a=head;
	min=head->data;
	while(a!=NULL)
	{
	if(min>a->data)
	{min=a->data;
	}else
	a=a->next;}
	printf("Min Data: %d",min);
}

void max()
{
	struct Node *a;
	int max;
	a=head;
	max=head->data;
	while(a!=NULL)
	{
	if(max<a->data)
	max=a->data;
	else
	a=a->next;}
	printf("Max Data: %d",max);
}
int main()
{
	int ch;	
	while(1)
	{
	printf("\nPress 1 to create, 2 to view, 3 for exit, 4 to show min, 5 to show max: ");
	scanf("%d",&ch);
	if(ch==1)
	create();
	else if(ch==2)
	view();
	else if(ch==3)
	break;
	else if(ch==4)
	min();
	else if(ch==5)
	max();
    }
}
