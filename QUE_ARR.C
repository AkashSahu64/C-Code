#include <stdio.h>

int que[50],max=50;
int rear = - 1;
int front = - 1;
void insert()
{
    int item;
    if (rear == max - 1)
    printf("Queue is Overflow \n");
    else
    {
	if (front == - 1)

	front = 0;
	printf("Inset the element in queue : ");
	scanf("%d", &item);
	rear = rear + 1;
	que[rear] = item;
    }
}

void delete()
{
    if (front == - 1 || front > rear)
    {
	printf("Queue is Underflow \n");
	return ;
    }
    else
    {
	printf("Element deleted from queue is : %d\n", que[front]);
	front = front + 1;
    }
}

void display()
{
    int i;
    if (front == - 1)
	printf("Queue is empty \n");
    else
    {
	printf("Queue is : \n");
	for (i = front; i <= rear; i++)
	    printf("%d ", que[i]);
	printf("\n");
    }
}

main()
{
    int ch;
    while (1)
    {
	printf("1.Insert an element in queue \n");
	printf("2.Delete an element from queue \n");
	printf("3.Show all elements of queue \n");
	printf("4.Exit \n");
	printf("Enter your choice : ");
	scanf("%d", &ch);
	switch (ch)
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
	    exit(1);
	    default:
	    printf("Invalid choice \n");
	}
    }
}