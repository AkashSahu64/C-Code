#include<stdio.h>

struct queue {
	int size,r,f;
	int *arr;
};
/*int underflow(struct queue *q){
	if(q->r==q->f){
		return 1;
	}
	return 0;
} */
int overflow(struct queue *q){
	if(q->r==q->size-1){
		return 1;
	}
	return 0;
}
void enqueue(struct queue *q,int item){
	if(overflow(q)){
		printf("Queue is overflow\n");
	}
	else{
	q->r++;
	q->arr[q->r]=item;
	printf("Enqueue element %d\n",item);
	}
}
int main(){
	struct queue q;
	q.size = 10;
	q.f = q.r = 0;
	q.arr = (int*)malloc(q.size*sizeof(int));
	enqueue(&q,12);
	enqueue(&q,13);
    /*	if(underflow(&q)){
		printf("Queue is underflow\n");
	}
	if(overflow(&q)){
		printf("Queue is overflow\n");
	}*/
	return 0;
}
