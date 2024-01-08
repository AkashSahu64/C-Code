#include<stdio.h>

int main()
{
	int arr[7] = {5,8,12,15,18,20,24};
	int n = 7,beg = 0,end = n-1,item = 12,loc=-1;
	int mid=( beg+end)/2;
	clrscr();
	while(beg <= end && arr[mid]!=item)
	{

		 mid = (beg+end)/2;
	printf("\n%d %d %d",beg,end, mid);
		if(arr[mid] > item)
			end = mid - 1;
			else
			beg = mid + 1;

	}
	if(arr[mid]== item)
	printf("\nElement is found in the array %d\n ",mid);
	else
	printf("Element is not found at place");
	return 0;
}



