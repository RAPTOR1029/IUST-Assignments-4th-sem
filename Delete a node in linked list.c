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
		printf("%d ",q->data);
		q=q->next;
	}
}
void insert()
{
	int target;
	struct Node *trav, *temp;
	temp=(struct Node*)malloc(sizeof(struct Node));
	printf("Enter the data you want to insert: ");
	scanf("%d", &temp->data);
	temp->next=NULL;
	printf("Enter the node data after which you want to add the data: ");
	scanf("%d",&target);
	trav=head;
	while(head!=NULL)
	{if (trav->data==target)
	break;
	else
	trav=trav->next;
	}
	temp->next=trav->next;
	trav->next=temp;
	if(trav==tail)
	{tail=trav;
	}
	
}

void delete()
{
	struct Node *t, *p;
	int i;
	printf("Enter the node to delete: ");
	scanf("%d", &i);
	if(head->data==i)
	{
		t=head;
		head=head->next;
		free(t);
		return;
	}
	t=head;
	while(t->data!=i)
	{
		p=t;
		t=t->next;
	}
	p->next=t->next;
	if(t==tail)
	{
		tail=p;
		free(t);
	}
}

int main()
{
	int ch;	
	while(1)
	{
	printf("\nPress 1 to create, 2 to view, 3 for exit, 4 to insert, 5 to delete: ");
	scanf("%d",&ch);
	if(ch==1)
	create();
	else if(ch==2)
	view();
	else if(ch==3)
	break;
	else if(ch==4)
	insert();
	else if(ch==5)
	delete();
    }
    return 0;
}
