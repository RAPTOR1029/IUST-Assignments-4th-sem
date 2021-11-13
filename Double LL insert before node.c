#include<stdio.h>
//CSE-19-40 YOUNIS!
#include<stdlib.h>
 
struct Node {
	struct Node *prev;
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
		temp->prev=NULL;
		if(head==NULL)
		{
			head=temp;
			tail=temp;
		}
		else
		{
		tail->next=temp;
		tail->prev=tail;
		tail=temp;}
	}
}
void insert()
{
	int a;
	struct Node *trav, *temp, *beh;
	temp=(struct Node*)malloc(sizeof(struct Node));
	printf("Enter the data of node before  which you want to insert a node:");
	scanf("%d",&a);
	printf("Enter the data you want to enter:");
	scanf("%d",&temp->data);
	beh=head;
	trav=head->next;
	if(head->data==a)
	{
		temp->next=head;
		head->prev=temp;
		head=temp;
	}
	else
	while (head!=NULL)
	{
		if(trav->data==a)
		{
			break;
		}
		else
		trav=trav->next;
		beh=beh->next;
	}
	temp->prev=beh;
	beh->next=temp;
	temp->next=trav;		
    trav->prev=temp;
}
void view()
{
	struct Node *q;
	printf("Data :");
	q=head;
	while(q!=NULL)
	{
		printf("%d ",q->data);
		q=q->next;
	}
}

int main()
{
	int ch;	
	while(1)
	{
	printf("\nPress 1 to create, 2 to view, 3 for exit, 4 to insert: ");
	scanf("%d",&ch);
	if(ch==1)
	create();
	else if(ch==2)
	view();
	else if(ch==3)
	break;
	else if(ch==4)
	insert();
    }
}
