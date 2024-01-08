#include<stdio.h>
#include<conio.h>

void ins_array(int arr[],int n)
{
	int i;
	for(i = 0; i < n; i++)
	printf("%d\n",arr[i]);
}
void ins_sort(int arr[],int n)
{
	int k;
	for(k=1; k<n; k++)
	{
		int t = arr[k];
		int j = k - 1;

		while(t<arr[j] && j>=0)
		{
			arr[j+1] = arr[j];
			j = j - 1;
		}
		arr[j+1] = t;
	}
}
int main()
{
	int arr[] = {6,4,10,34,63,12};
	int n = 6;
	ins_sort(arr,n);
	printf("Sorted array \n");
	ins_array(arr,n);
	return 0;
}