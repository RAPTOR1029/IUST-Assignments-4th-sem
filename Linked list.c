#include<stdio.h>
//CSE-19-40 YOUNIS!
#include<stdlib.h>
 
struct Node {
    int data;
    struct Node* next;
};
 
// Program to create a simple linked

int main()
{
    struct Node* n1 = NULL;
    struct Node* n2 = NULL;
    struct Node* n3 = NULL;
    struct Node* n4 = NULL;
	struct Node* n5 = NULL;
    
 
    // allocate 5 nodes in the heap
    n1 = (struct Node*)malloc(sizeof(struct Node));
    n2 = (struct Node*)malloc(sizeof(struct Node));
    n3 = (struct Node*)malloc(sizeof(struct Node));
    n4 = (struct Node*)malloc(sizeof(struct Node));
    n5 = (struct Node*)malloc(sizeof(struct Node));
    
    n1->data=1;
    n1->next=n2;
    n2->data=2;
    n2->next=n3;
    n3->data=3;
    n3->next=n4;
    n4->data=4;
    n4->next=n5;
    n5->data=5;
    n5->next=NULL;
    
    printf("%d, %d, %d, %d, %d",n1->data,n2->data,n3->data,n4->data,n5->data);
}
