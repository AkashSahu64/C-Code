#include<stdio.h>
}
	    t->link = ptr;
	    ptr->link = NULL;

	}
    }
}
void random_insert()
{
    int i,loc,item;
    struct node *ptr, *t;
    ptr = (struct node *) malloc (sizeof(struct node));
    if(ptr == NULL)
    {
	printf("\nOVERFLOW\n");
    }
    else
    {