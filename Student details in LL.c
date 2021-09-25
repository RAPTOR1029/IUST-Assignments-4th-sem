#include<stdio.h>
//CSE-19-40 YOUNIS!
#include<stdlib.h>
 
struct Node {
	char name[30];
    int age;
    float marks;
    struct Node* next;
};struct Node *head=NULL, *tail=NULL;

void create()
{
	int i,n,a;
	a=1;
	struct Node *temp;
	printf("Enter the number of nodes: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Student %d: ",a);
		temp=(struct Node*)malloc(sizeof(struct Node));
		
		printf("Enter Name: ");
		scanf("%s",&temp->name);
		printf("Enter Age: ");
		scanf("%d",&temp->age);
		printf("Enter Marks: ");
		scanf("%f",&temp->marks);
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
		a++;
	}
}
void view()
{
	struct Node *q;
	printf("Student Details: ");
	q=head;
	int a=1;
	while(q!=NULL)
	{
		printf("Serial number %d",a);
		printf("\nName:- %s",q->name);
		printf("\nAge:- %d",q->age);
		printf("\nMarks Obtained:- %f",q->marks);
		printf("\n\n\n");
		q=q->next;
		a++;
	}
}



int main()
{
	int ch;
	while(1)
{
	printf("\nPress 1 to create, 2 to view, 3 to exit: ");
	scanf("%d",&ch);
	if(ch==1)
	create();
	else if(ch==2)
	view();
	else 
	printf("Invalid input");
}
}
