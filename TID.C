#include<stdio.h>
#include<conio.h>
void display(int a[],int n)
{
	int i;
	printf("\nTraversing :");
	for(i=0;i<n;i++)
	printf(": %d",a[i]);
	printf("\n");

}
void ins(int a[],int n,int item,int k)
{
	int j;
	for(j=n;j>=k;j--)
	   a[j+1]=a[j];
	   a[k]=item;
	n++;
}
void del(int a[],int n,int k,int item)
{
	int i;
	for(i=k;i<n;i++)
	a[i]=a[i+1];
	item=a[k];
	n--;
}

int main()
{

	int a[]= {30,50,60,80};
	printf("Traverse\n");
	display(a,4);

	ins(a,5,40,3);
	del(a,5,2,60);
	printf("after\n");
	display(a,4);

	printf("delete\n");
	display(a,4);

	return 0;
}