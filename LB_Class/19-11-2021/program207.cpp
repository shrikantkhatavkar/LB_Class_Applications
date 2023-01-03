#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node* Lchild;
	struct node* Rchild;
}NODE, *PNODE, **PPNODE;


void Insert(PPNODE Head, int no)
{
	PNODE newn = new  NODE;

	newn->data = no;
	newn->Lchild = NULL;
	newn->Rchild = NULL;
	
	if(*Head == NULL)
	{
		*Head = newn;	
	}
	else
	{
		PNODE temp = *Head;	
	
		while(1)         //Unconditinal loop  for(;;)
		{
			if(temp->data == no)
			{
				cout<<"Duplicate node\n";

				delete newn;
				break;
			}	
			else if(temp->data > no)     // lahan data
			{
				if(temp->Lchild == NULL)
				{
					temp->Lchild = newn;
					break;
				}
				temp = temp->Lchild;
	
			}
			else if(temp->data < no)    // motha data
			{
				if(temp->Rchild == NULL)
				{
					temp->Rchild = newn;
					break;
				}
				temp = temp->Rchild;
	
			}				
		}
		
	}
}

bool Search(PNODE Head, int no)
{
	bool flag = false;
	if(Head == NULL)    // if tree is empty
	{
		return false;  // return flag;
	}
	else  //tree contains atleast one node
	{
		while(Head != NULL)
		{
			if(Head->data == no)  // node sapadla
			{
				flag = true;
				break;
			}
			else if(no > (Head->data))
			{	
				Head = Head->Rchild;
				
			}
			else if(no < (Head->data))
			{	
				Head = Head->Lchild;	
			}
		}
		return flag;
	}
}




int main()
{
	int no = 0;
	bool bret = false;

	PNODE first = NULL;

	Insert(&first,51);
	Insert(&first,21);
	Insert(&first,101);

	cout<<"Enter number to be searched\n";
	cin>>no;

	bret = Search(first, no);
	if(bret == true)
	{
		cout<<"Data found\n";	
	}
	else
	{
		cout<<"Data not found\n";
	}
	
	return 0;
}







