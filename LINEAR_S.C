#include<stdio.h>

int main()
{

	int i,n,item, loc = 0;
	int arr[20];

	printf("Enter the number of element : ");
	scanf("%d",&n);
	printf("Enter the array of element\n");

	for(i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Enter the element to be seached : ");
	scanf("%d",&item);

	for(i = 0; i < n; i++)
	{
		if(item == arr[i])
		{
			loc = 1;
			break;
		}
	}
	if(loc == 1)

	printf("Elenment is found in the array at the positon : %d",i+1);

	else

	printf("Element is not found in the array");

	return 0;
}


