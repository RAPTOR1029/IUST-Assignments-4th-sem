#include<stdio.h>
#include<stdlib.h>
struct node {
	struct node *prev;
	int data;
	struct node *next;
};
struct node *head=NULL, *tail=NULL;
void delete()
{
	struct node *t, *p;
	int i;
	printf("Enter the node to delete: ");
	scanf("%d", &i);
	t=head;
	while(head!=NULL && head->data==i)
	{
		head=t->next;
		head->prev=NULL;
		free(t);
		t=head;
	}
	
	while(t!=NULL)
	{
		while(t!=NULL && t->data!=i)
		{
		p=t;
		t=t->next;
		}
	if(t==NULL)
	{
		return;	
	}
	p->next=t->next;
	p->next->prev=p;
	free(t);
	t=p->next;
	}
}

void view()
{
	struct node *s;
	s=head;
	printf("Data=");
	while(s!=NULL)
	{
		printf("%d ",s->data);
		s=s->next;
	}
}
void create()
{
	int i,q;
	struct node *temp;
	printf("Enter the number of nodes you want to create:");
	scanf("%d",&q);
	for(i=1;i<=q;i++)
	{
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter Data:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	temp->prev=NULL;
	if(head==NULL)
	{
		head=temp;
		tail=temp;
	}
	else
	tail->next=temp;
	tail->prev=tail;
	tail=temp;	
	}
}
int main()
{
	int c;
	while(1)
	{
	printf("Enter 1 to create, 2 to view, 3 to delete, anything else to exit:");
	scanf("%d",&c);
	if (c==1)
		create();
	else if (c==2)
		view();
	else if (c==3)
		delete();
	else
		break;
    }
}
    
