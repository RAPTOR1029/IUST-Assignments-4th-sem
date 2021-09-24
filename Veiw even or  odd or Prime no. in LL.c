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
void even()
{
	struct Node *q;
	printf("Even Data :");
	q=head;
	while(q!=NULL)
	{
		if(q->data%2==0)
		printf("%d ",q->data);
		q=q->next;
	}
}
void odd()
{
	struct Node *q;
	printf("Odd Data :");
	q=head;
	while(q!=NULL)
	{
		if(q->data%2!=0)
		printf("%d ",q->data);
		q=q->next;
	}
}

int isprime(int n)
{
	int i;
	if(n==2 || n==3)
	{
		return n;
	}
	else if(n==1 || n%2==0 ||n%3==0)
	{
		return -1;
	}
	else
	for(i=4;i=n/2;i++)
	if(n%i==0)
	return -1;
	else 
	return n;
	
}

void prime()
{
	struct Node *q;
	printf("Prime Data :");
	q=head;
	while(q!=NULL)
	{
		int a=isprime(q->data);
		if(a!=-1)
		printf("%d ",q->data);
		q=q->next;
	}
}

int main()
{
	int ch;	
	while(1)
	{
	printf("Press\n1 to create\n2 to view\n3 for exit\n4 to veiw even no.,s in LL\n5 to veiw odd no,.s in LL\n6 to find prime numbers in LL: ");
	scanf("%d",&ch);
	if(ch==1)
	create();
	else if(ch==2)
	view();
	else if(ch==3)
	break;
	else if(ch==4)
	even();
	else if(ch==5)
	odd();
	else if(ch==6)
	prime();
    }
}
