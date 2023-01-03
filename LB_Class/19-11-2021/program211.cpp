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
	PNODE newn = new NODE;

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
		if(Head == NULL)
		{
			return false;
		}
		else
		{
			return true;
		}
	
	}
}


int Count(PNODE Head)
{
	static int iCnt = 0;
	
	if(Head != NULL)
	{
		iCnt++;
		Count(Head->Lchild);
		Count(Head->Rchild);
	}
	return iCnt;
}


int CountLeaf(PNODE Head)
{
	static int iCnt = 0;
	
	if(Head != NULL)
	{
		if((Head->Lchild == NULL) && (Head->Rchild == NULL) )
		iCnt++;
		CountLeaf(Head->Lchild);
		CountLeaf(Head->Rchild);
	}
	return iCnt;
}


int CountParrentNode(PNODE Head)
{
	static int iCnt = 0;
	
	if(Head != NULL)
	{
		if((Head->Lchild != NULL) || (Head->Rchild != NULL) )
		iCnt++;
		CountParrentNode(Head->Lchild);
		CountParrentNode(Head->Rchild);
	}
	return iCnt;
}


void DisplayInorder(PNODE Head)   //LDR
{	
	if(Head != NULL)
	{
		DisplayInorder(Head->Lchild);   //L
		cout<<Head->data<<"\n";         //D
		DisplayInorder(Head->Rchild);   //R
	}
}


void DisplayPostorder(PNODE Head)   //LRD
{	
	if(Head != NULL)
	{
		DisplayPostorder(Head->Lchild);   //L
		DisplayPostorder(Head->Rchild);   //R
		cout<<Head->data<<"\n";         //D
	}
}

void DisplayPreorder(PNODE Head)   //DLR
{	
	if(Head != NULL)
	{
		cout<<Head->data<<"\n";         //D
		DisplayPreorder(Head->Lchild);   //L
		DisplayPreorder(Head->Rchild);   //R
	}
}


int main()
{
	int no = 0, iret = 0;
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
	
	iret = Count(first);
	cout<<"Number of nodes are :"<<iret<<"\n";

	iret = CountLeaf(first);
	cout<<"Number of leaf nodes are :"<<iret<<"\n";

	iret = CountParrentNode(first);
	cout<<"Number of parrent nodes are :"<<iret<<"\n";

	cout<<"DisplayInorder\n";
	DisplayInorder(first);

	cout<<"DisplayPostorder\n";
	DisplayPostorder(first);

	cout<<"DisplayPreorder\n";
	DisplayPreorder(first);

	
	return 0;
}




