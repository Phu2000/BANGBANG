# include<bits/stdc++.h>
using namespace std;
class Node
{
public:
	int d; 
	Node*next;
};
void insert(Node*&head,int x) 
{
	Node*node = new Node(); // allocate memory 2 node let node be an abstract data
	node->d = x; // define data in the new node as new data (saving data define in there)
	node->next = head; // Let next of the new node as head
	head = node; // let pointer name head point new node
}
void print(Node*node) 
{ 
	while (node != NULL) 
	{ 
		cout<<' '<<node->d; 
		node = node->next; 
	} 
}
int max_min(Node*head)
{
	int max = INT_MIN,min = INT_MAX;
	while (head != NULL) { 
	if (max < head->d) 
		max = head->d; 
		head = head->next; 
	if (min > head->d) 
		min = head->d; 
		head = head->next;
	} 
	return max; return min;
	cout<<"Max is"<<' '<<max<<"Min is"<<' '<<min;
}
int main()
{
	Node*head = NULL; // Start with empty List
	int n,i,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
    	cin>>x;
    	insert(*&head,x);
    	print(head);
	}max_min(head);
}
