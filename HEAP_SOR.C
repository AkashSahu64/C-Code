#include<stdio.h>

void heap(int* arr,int ptr,int r)
{
	int l_node = r;

	int left = 2*r+1;
	int right = 2*r+2;

	if(left < ptr && arr[left] > arr[l_node])
	{
		l_node = left;
	}
	if(right < ptr && arr[right] > arr[l_node])
	{
		l_node = right;
	}
	if(l_node != r)
	{
		int t = arr[r];
		arr[r] = arr[l_node];
		arr[l_node] = t;
		heap(arr, ptr,l_node);
	}
}
void heap_sort(int* arr, int ptr)
{
	int r;
	for (r = ptr/2 - 1; r>=0; r--)
	{
		heap(arr, ptr,r);
	}
	for(r = ptr - 1; r>=0; r--)
	{
		int t = arr[r];
		arr[r] = arr[0];
		arr[0] = t;

		heap(arr, r,0);
	}
}
void print_sort_heap(int* arr, int ptr)
{
	int r;
	for(r=0; r<ptr; r++)
	{
		printf("Node element = %d\n",arr[r]);
	}
}
int main()
{
	int arr[] = {50,35,46,26,70,15,85,5,90,100};
	int ptr = sizeof(arr)/sizeof(arr[0]);

	printf("\nHeap before sorting\n");
	print_sort_heap(arr, ptr);

	heap_sort(arr, ptr);
	printf("\nHeap after sorting\n");
	print_sort_heap(arr, ptr);

	return 0;

}