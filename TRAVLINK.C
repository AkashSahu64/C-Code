#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


struct node
{
	int data;
	struct node* next;
};
int main()
{
//struct node *head,*newnode,*t;
//head = 0;
int count;
int choice;
while(choice)
struct node *head,*newnode,*t;

{
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter the data of the link: \n);
	scanf("%d",newnode->data);
	newdata->data = 0;
	if(head == 0)
	{
		head = t = newnode;
	}
	else
	{
		t->next = newnode;
		t = newnode;
	}
	printf("Do you want to continue(Y,N) \n");
	scanf("%d",&choice);
}
t = head;
while(t != 0)
{
	printf("%d",t->data);
	t = t->next;
	count++;
}
return 0;
}