#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE
typedef struct node** PPNODE

int main()
{
	PNODE first = NULL;
	
	//call by value
	fun(first);

	//call by address
	gun(&first);

	retrun 0;
}