#include<stdio.h>

void selection_sort(int arr[],int n)
{
	int j,k,m;

	for(k = 0; k < n - 1; k++)
	{
		m = k;
		for(j = k+1; j < n; j++)
		if(arr[j] < arr[m])
		m = j;
		{
			int t = arr[m];
			arr[m] = arr[k];
			arr[k] = t;
		}
	}
}
void print_sorted_arr(int arr[],int n)
{
	int k;
	for(k = 0; k < n; k++)
	printf("%d\n",arr[k]);
}
int main()
{
	int arr[] = {34,56,25,50,24,40,15,45};
	int n = 8;
	printf("Before sorting the arrary of element\n");
	print_sorted_arr(arr,n);
	selection_sort(arr,n);
	printf("After sorting the arrary of element\n");
	print_sorted_arr(arr,n);
	return 0;
}