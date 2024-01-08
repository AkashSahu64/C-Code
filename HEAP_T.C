#include<stdio.h>
#include<stdlib.h>


int arr[50],r;

void display()
{
    int i;
    if(r==0)
    {
	printf("Heap is empty\n");
    }
    for(i=0;i<r;i++)
    printf("%d \n",arr[i]);
}
void insert(int node, int loc)
{
    int par;
    while(loc>0)
    {
	par = (loc-1)/2;
	if (node<=arr[par])
	{
	    arr[loc] = node;
	    return;
	}
	arr[loc] = arr[par];
	loc = par;
    }
    arr[0] = node;
}
void delete(int node)
{
    int left, right, i, t, par;
    for(i=0;i<node;i++)
    {
	if (node==arr[i])
	break;
    }
    if(node!=arr[i])
    {
	printf("%d is not found in Heap\n", node);
    }
    arr[i] = arr[r-1];
    r--;
    par = (i-1)/2;
    if (arr[i]>arr[par])
    {
	insert(arr[i],i);
    }
    left = 2*i+1;
    right = 2*i+2;
    while(right < r)
    {
	if(arr[i]>=arr[left] && arr[i]>=arr[right])
	return;
	if(arr[right]<=arr[left])
	{
	    t = arr[i];
	    arr[i] = arr[left];
	    arr[left] = t;
	    i = left;
	}
	else
	{
	    t = arr[i];
	    arr[i] = arr[right];
	    arr[right] = t;
	    t = right;
	}
	 left = 2*i+1;
	right = 2*i+2;
    }
    if(left==r-1 && arr[i])
    {
	 t = arr[i];
	arr[i] = arr[left];
	arr[left] = t;
    }

}
int main(){
    int ch,node;
    r=0;
    while (1)
    {
	printf("1. Insert an element \n");
	printf("2. Delete an element \n");
	printf("3. Display the element \n");
	printf("4.Enit\n");
	printf("5. Enter youe choice: ");
	scanf("%d",&ch);
	switch (ch)
	{
	    case 1:
		printf("\nEnter the element to br insert : ");
		scanf("%d",&node);
		insert(node,r);
		r++;
		break;
	    case 2:
		printf("\nEnter the element to be ddelete : ");
		scanf("%d",&node);
		delete(node);
		break;
	    case 3:
		display();
		break;
	    case 4:
		exit(0);
	    default:
		printf("\nInvalid choice !\n");
	}
    }
    return 0;

}