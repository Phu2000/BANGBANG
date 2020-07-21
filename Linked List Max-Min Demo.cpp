# include<bits/stdc++.h>
using namespace std;
class Node
{
public:
	int n; 
	Node*next;
};
bool isEmpty(Node*head)
{
	if (head==NULL)return true;
	else return false;
}
char menu()
{
	char choice;
	cout<<"Menu\n";
	cout<<"1.Add an item.\n";
	cout<<"2.Remove an item.\n";
	cout<<"3.Show The List.\n";
	cout<<"4.Exit.\n";
	cin>>choice;
	return choice;
}
void insert(Node*&head,Node*&last,int n) 
{
	Node*node = new Node(); // allocate memory 2 node let node be an abstract data
	node->n = n; // define data in the new node as new data (saving data define in there)
	node->next = NULL; // Let next of the new node as head
	head = node; // let pointer name head point new node
	last = node;
}
void append(Node*&head,Node*&last,int n)
{ 
    if(isEmpty(head)) insert(head,last,n);
	else
	{  
	Node*node = new Node(); // allocate memory 2 node let node be abstract data
	node->n = n; // define data in the new node as new data (saving data define in there)
	node->next = NULL; // This new node is going to be the last node, so make next of it as NULL
	last->next = node; // Change the next of last node
	last = node;
    }
}
void remove(Node*&head,Node*&last)
{
	if(isEmpty(head))cout<<"The List is Empty.\n";
	else if (head==last)
	{
		delete head;
		head == NULL;
		last == NULL;
	}
	else
	{
		Node *node=head;
		head =head->next;
		delete node;
	}
}
void print(Node*node) // Function Prints Content of the singly linked list
{ 
	if(isEmpty(node))cout<<"The list is empty\n";
	else
	{
	cout << "The List contains: \n";
	while (node!= NULL) 
	{ 
		cout<<node->n<<endl; 
		node = node->next; 
	}
	}
} 
int main()
{
	Node* head = NULL; // Start with empty List
	Node* last = NULL;
	char choice;int i,n,x;
	cin>>x;
	for(i=0;i<x;i++)
    {
    choice = menu();
	switch(choice)
	{
		case '1': cout<<"Please enter a number: ";
		          cin>>n;
		          append(head,last,n);
		          break;
		case '2': remove(head,last);
		          break;
		case '3': print(head);
		          break;
		default: cout<< "System exit\n";
	} 
	} while(choice!='4'); return 0;
}
