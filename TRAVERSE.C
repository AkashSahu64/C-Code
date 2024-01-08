#include<stdio.h>
struct Node
{
	int info;
	struct Node *link;
};
void link_trav(struct Node *ptr)
{
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->info);
		ptr = ptr->link;
	}
}
int main() {
struct Node *head,*second,*third;
//struct Node *second;
//struct Node *third;
head=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
third=(struct Node*)malloc(sizeof(struct Node));

head->info=7;
head->link=second;
second->info=10;
second->link=third;
third->info=15;
third->link=NULL;
link_trav(head);
return 0;
}