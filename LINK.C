#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *start;


void beg_insert()
{
    struct node *ptr;
    int item;
    ptr = (struct node *) malloc(sizeof(struct node *));
    if(ptr == NULL)
    {
	printf("\nOVERFLOW");
    }
    else
    {
	printf("\nEnter value : ");
	scanf("%d",&item);
	ptr->info = item;
	ptr->link = start;
	start = ptr;
    }

}
void last_insert()
{
    struct node *ptr,*t;
    int item;
    ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
	printf("\nOVERFLOW\n");
    }
    else
    {
	printf("\nEnter value : \n");
	scanf("%d",&item);
	ptr->info = item;
	if(start == NULL)
	{
	    ptr -> link = NULL;
	    start = ptr;
	}
	else
	{
	    t = start;
	    while (t -> link != NULL)
	    {
		t = t -> link;
	    }
	    t->link = ptr;
	    ptr->link = NULL;

	}
    }
}
void random_insert()
{
    int i,loc,item;
    struct node *ptr, *t;
    ptr = (struct node *) malloc (sizeof(struct node));
    if(ptr == NULL)
    {
	printf("\nOVERFLOW\n");
    }
    else
    {
	printf("\nEnter the item : ");
	scanf("%d",&item);
	ptr->info = item;
	printf("\nEnter the location of item : ");
	scanf("\n%d",&loc);
	t = start;
	for(i=0;i<loc;i++)
	{
	    t = t->link;
	    if(t == NULL)
	    {
		printf("\nItem not inserted\n");
		return;
	    }

	}
	ptr ->link = t ->link;
	t ->link = ptr;
    }
}
void traverse()
{
	struct node* ptr;
	ptr = start;
	if(ptr == NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		while(ptr != NULL)
		{
			printf("%d\n",ptr->info);
			ptr = ptr->link;
		}
	}
}
void beg_delete()
{
    struct node *ptr;
    if(start == NULL)
    {
	printf("\nList is empty\n");
    }
    else
    {
	ptr = start;
	start = ptr->link;
	free(ptr);
    }
}
void last_delete()
{
    struct node *ptr,*ptr1;
    if(start == NULL)
    {
	printf("\nList is empty");
    }
    else if(start -> link == NULL)
    {
	start = NULL;
	free(start);
    }

    else
    {
	ptr = start;
	while(ptr->link != NULL)
	{
	    ptr1 = ptr;
	    ptr = ptr ->link;
	}
	ptr1->link = NULL;
	free(ptr);
    }
}
void random_delete()
{
    struct node *ptr,*ptr1;
    int loc,i;
    printf("\n Enter the location of item \n");
    scanf("%d",&loc);
    ptr=start;
    for(i=0;i<loc;i++)
    {
	ptr1 = ptr;
	ptr = ptr->link;

	if(ptr == NULL)
	{
	    printf("\nItem not deleted\n");
	    return;
	}
    }
    ptr1 ->link = ptr ->link;
    free(ptr);
    printf("\nDeleted node %d ",loc+1);
}
void search()
{
    struct node *ptr;
    int item,i=0,flag;
    ptr = start;
    if(ptr == NULL)
    {
	printf("\nList is empty\n");
    }
    else
    {
	printf("\nEnter item to be search\n");
	scanf("%d",&item);
	while (ptr!=NULL)
	{
	    if(ptr->info == item)
	    {
		printf("Item found at location %d ",i+1);
		flag=0;
	    }
	    else
	    {
		flag=1;
	    }
	    i++;
	    ptr = ptr -> link;
	}
	if(flag==1)
	{
	    printf("Item not found at the location\n");
	}
    }

}

void display()
{
    struct node *ptr;
    ptr = start;
    if(ptr == NULL)
    {
	printf("Link is empty\n");
    }
    else
    {
	while (ptr!=NULL)
	{
	    printf("\n%d",ptr->info);
	    ptr = ptr -> link;
	}
    }
}
int main ()
{
    int choice =0;
    while(choice != 9)
    {
	printf("\nPlease enter your choice : ");
	printf("\n1.Traversr the link\n2.Insert at begining\n3.Insert at last\n4.Insert at any random location\n5.Delete from Beginning\n6.Delete from last\n7.Delete node after specified location\n8.Search for an element\n9.Display elements\n10.Exit\n");
	scanf("\n%d",&choice);
	switch(choice)
	{
	    case 1:
	    traverse();
	    break;
	    case 2:
	    beg_insert();
	    break;
	    case 3:
	    last_insert();
	    break;
	    case 4:
	    random_insert();
	    break;
	    case 5:
	    beg_delete();
	    break;
	    case 6:
	    last_delete();
	    break;
	    case 7:
	    random_delete();
	    break;
	    case 8:
	    search();
	    break;
	    case 9:
	    display();
	    break;
	    case 10:
	    exit(0);
	    break;
	    default:
	    printf("Invalid choice !\n");
	}
    }
    return 0;
}