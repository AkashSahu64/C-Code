#include<stdio.h>
int a[10]={50,45,70,57,28,40,20,50,76,67};
int quick(int l,int r)
{
	int loc=l,t;
	do{
	   while(a[loc]<a[r]&&loc<r)
	   r--;
	   if(loc==r)
	   {
		printf("\nL<-R : %d",loc);
		return loc;
	   }
	   if(a[loc]>a[r])
	   {
		t=a[loc];
		a[loc]=a[r];
		a[r]=t;
		loc=r;
	   }
	   while(a[l]<a[loc]&&l<loc)
	   l++;
	   if(loc==1)
	   {
		printf("\nL->R : %d",loc);
		return loc;
	   }
	   if(a[l]>a[loc])
	   {
		t=a[loc];
		a[loc]=a[l];
		a[l]=t;
		loc=l;
	   }
	}
	   while(1);
}
void main()
{
	int loc,i;
	int beg=0,end=9;
	int lo[10],up[10];
	int top=0;
	do{
	   printf("\nbeg = %d and end = %d element = %d", beg, end, a[beg]);
	   loc=quick(beg,end);
	   printf("Final : %d : value %d\n",loc,a[loc]);
	   if(loc<end)
	   {
		top++;
		lo[top]=loc+1;
		up[top]=end;
	   }
	   if(loc>beg)
	   {
		top++;
		lo[top]=beg;
		up[top]=loc-1;
	   }
	   beg=lo[top];
	   end=up[top];
	   top--;

	   for(i=0;i<10;i++)
	   printf("%d",a[i]);
	   getch();
	}
	while(top>-1);
}










