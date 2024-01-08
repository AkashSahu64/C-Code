#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *front,*rear;
void insert()
{
    struct node *ptr;
    int item;

    ptr = (struct node *) malloc (sizeof(struct node));
    if(ptr == NULL)
    {
	printf("\nOVERFLOW\n");
	return;
    }
    else
    {
	printf("\nInsert an element in Queue : ");
	scanf("%d",&item);
	ptr -> info = item;
	if(front == NULL)
	{
	    front = ptr;
	    rear = ptr;
	    front -> link = NULL;
	    rear -> link = NULL;
	}
	else
	{
	    rear -> link = ptr;
	    rear = ptr;
	    rear->link = NULL;
	}
    }
}
void delete()
{
    struct node *ptr;
    if(front == NULL)
    {
	printf("\nUNDERFLOW\n");
	return;
    }
    else
    {
	ptr = front;
	front = front -> link;
	free(ptr);
    }
}
void display()
{
    struct node *ptr;
    ptr = front;
    if(front == NULL)
    {
	printf("\nQueue is empty\n");
    }
    else
    {
	while(ptr != NULL)
	{
	    printf("\n%d\n",ptr -> info);
	    ptr = ptr -> link;
	}
    }
}
void main ()
{
    int ch;
    while(ch != 4)
    {
	printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");
	printf("\nEnter your choice : ");
	scanf("%d",& ch);
	switch(ch)
	{
	    case 1:
	    insert();
	    break;
	    case 2:
	    delete();
	    break;
	    case 3:
	    display();
	    break;
	    case 4:
	    exit(0);
	    break;
	    default:
	    printf("\nInvalid choice\n");
	}
    }
}
