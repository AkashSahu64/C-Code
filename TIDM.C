#include<stdio.h>
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);

}
void insert(int a[],int n,int item,int k)
{
	int i;
	for(i=n;i>=k;i--)
	a[i+1]=a[i];
	a[k]=item;
	n++;
}
void del(int a[],int n,int item,int k)
{
	int i;
	for(i=k;i<n;i++)
	a[i]=a[i+1];
	item=a[k];
	n--;
}
int main()
{
	int a[]={40,30,60,50,80,20};
	int n=sizeof(a)/sizeof(a[0]);
	int ch;
	while(1)
	{
		printf("1.Insertion\n 2.Deletion\n 3.Show the element\n 4.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			insert(a,n,10,3);
			break;
			case 2:
			del(a,n,50,3);
			break;
			case 3:
			display(a,n);
			break;
			case 4:
			exit(1);
		       //	default();
		       //	printf("\nInvalid choice\n");
		}
	}
	return 0;
}