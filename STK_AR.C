#include<stdio.h>

int main()
{
	int ch,item,top=-1,max=4;
	int stk[5];
	do
	{
		printf("Choose your option \n");
		printf("1.Push\n 2.Push\n 3.Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the item to push : ");
				scanf("%d",&item);
				top = top+1;
				if(top > max - 1)
				{
					printf("\nOVERFLOW\n");
				}
				else
				{
					stk[top] = item;
				}
				break;
			case 2:
				if(top < 0)
				{
					printf("\nUNDERFLOW\n");
				}
				else
				{
					printf("poped value = %d",stk[top]);
					top = top - 1;
				}
				break;

		}
		getch();
	}
	while(ch != 3);
	return 0;
}