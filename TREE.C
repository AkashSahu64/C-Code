#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* left;
	struct node* right;
};
struct node* creat_node(int data){
	struct node* n;
	n = (struct node*)malloc(sizeof(struct node));
	n->data = data;
	n->left = NULL;
	n->right = NULL;
	return n;
}
void pre_order(struct node* root){
	if(root != NULL){
		printf("%d\n",root->data);
		pre_order(root->left);
		pre_order(root->right);
	}
}
int main(){
	struct node* p = creat_node(2);
	struct node* p1 = creat_node(5);
	struct node* p2 = creat_node(7);
	struct node* p3 = creat_node(6);
	struct node* p4 = creat_node(3);
	struct node* p5 = creat_node(8);
	struct node* p6 = creat_node(12);
	struct node* p7 = creat_node(11);
	struct node* p8 = creat_node(1);
	struct node* p9 = creat_node(4);
	struct node* p10 = creat_node(9);

	p->left = p1;
	p->right = p2;
	p1->left = p3;
	p1->right = p4;
	p2->left = p5;
	p2->right = p6;
	p4->left = p7;
      //	p->right = p2;
	p6->left = p8;
	p6->right = p9;
	p8->left = p10;



	pre_order(p);
	return 0;
}