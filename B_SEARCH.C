#include<stdio.h>

int binary_search(int arr[],int item,int beg,int end,int loc)
{
	while(beg <= end)
	{
		int mid = end+(beg-end)/2;

		if(arr[mid] == item)
			return mid;
		if(arr[mid] > item)
			end = mid - 1;
			else
			beg = mid + 1;
	}
	return loc;
}
int main()
{
	int arr[] = {5,8,10,35,45,65};
	int n = 6;
	int item = 45;
	int res = binary_search(arr,item,0,n - 1,-1);
	if(res == -1)
	printf("Not found\n");
	else
	printf("Element is found at place %d\n",res);
	return 0;
}