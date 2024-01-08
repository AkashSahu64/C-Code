#include <stdio.h>
#include <stdlib.h>
struct node
{
int info;
struct node *next;
};
struct node *top;
void push ()
{
    int info;
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
	printf("OVERFLOW\n");
    }
    else
    {
	printf("Enter the value : ");
	scanf("%d",&info);
	if(top==NULL)
	{
	    ptr->info = info;
	    ptr -> next = NULL;
	    top=ptr;
	}
	else
	{
	    ptr->info = info;
	    ptr->next = top;
	    top=ptr;

	}

    }
}

void pop()
{
    int item;
    struct node *ptr;
    if (top == NULL)
    {
	printf("Underflow\n");
    }
    else
    {
	item = top->info;
	ptr = top;
	top = top->next;
	free(ptr);

    }
}
void display()
{
    int i;
    struct node *ptr;
    ptr=top;
    if(ptr == NULL)
    {
	printf("Stack is empty\n");
    }
    else
    {
	printf(" Stack elements are: \n");
	while(ptr!=NULL)
	{
	    printf("%d\n",ptr->info);
	    ptr = ptr->next;
	}
    }
}

int main ()
{
    int ch=0;
    while(ch != 4)
    {
	printf("\n\nChose the options form menu\n");
	printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
	printf("\n Enter your choice : \n");
	scanf("%d",&ch);
	switch(ch)
	{
	    case 1:
	    {
		push();
		break;
	    }
	    case 2:
	    {
		pop();
		break;
	    }
	    case 3:
	    {
		display();
		break;
	    }
	    case 4:
	    {
		printf("Exit\n");
		break;
	    }
	    default:
	    {
		printf("Invalid choice !\n ");
	    }
	}
    };
    return 0;
}
