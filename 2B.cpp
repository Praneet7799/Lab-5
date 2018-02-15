#include <iostream>
using namespace std;


class Node {//element of the linked list
	public:
	int data;
	Node* next;

	Node() {//constuctor initializes an empty node
	data = 0;
	next = NULL;
	}
};

class LinkedList {
	private://head points to the start, tail to the end, and n is the number of elements in a linked list
	Node* head;
	Node* tail;
	int n;

	public:
	LinkedList() {
	head = NULL;
	tail = NULL;
	n = 0;
	}

	void insert(int x);
	void insertAt(int x, int i);
	void deletelast();
	void deleteAt(int i);
	void display();
	int countElements();
	Node *move(int c)
	{
		Node *tmp=new Node;
		tmp=head;
		for(int i=1;i<c;i++)
		tmp=tmp->next;
		return tmp;
	}
   void quicksort(int left, int right)
   {
   	int i = left, j = right;//The left end and right end of the elements
            Node *tmp=new Node;
            Node *pivot=new Node;

            pivot=move((left+right)/2);//pivot point set as middle node
            while (i <= j)
            {
                   while (move(i)->data < pivot->data)
                   i++;                   // skipping the elemnts from left till move(i)->data < pivot->data
                   while (move(j)->data > pivot->data)
                   j--;                   // skipping the elemnts from right till move(j)->data > pivot->data
                   if (i <= j)            //if athe conditions fail then they are swapped
                   {
                           tmp->data = move(i)->data;
                           move(i)->data = move(j)->data;
                           move(j)->data = tmp->data;
                           i++;
                           j--;
                    }
       };
       if (left < j)                 // Doing this recursively  for the partitions made by the middle elemnts
            quicksort(left, j);
      if (i < right)
            quicksort( i, right);
}


};

void LinkedList::insert(int x) {
	//temp points to the newly created node
	Node* temp = new Node;
	//the value input by the user, x is assigned to the node and since it's added to the end, it's next points to NULL
	temp->data = x;
	temp->next = NULL;
 //Checks if the list is empty or not and changes head or attaches the new node to the list accordingly
	if (head == NULL) {
	head = temp;
	} else {
	tail->next = temp;
	}
	//changes the tail and increments the number of elements by one
	tail = temp;
	++n;
}

void LinkedList::insertAt(int i, int x)
{ //checks if the number of elements in the list are enough to insert at position i
if (i > n)
 {cout << "Linked List does not have that many elements \n";
	}
	//adds the element to the start,assigns the next of temp to the first element and changes the head to point at the new start
else if (i == 0)
 {Node* temp = new Node;
	temp->data = x;
	temp->next = head;
	head = temp;
	++n;
	}
else if (i == n)
 {//adds the node at the end of the list, identical to insert function

 Node* temp = new Node;
	temp->data = x;
	temp->next = NULL;

	if (head == NULL)
 {head = temp;
	}
 else
 { tail->next = temp;
 }
	tail = temp;
	++n;

 }
 else
 {
	Node* temp = new Node;
	temp->data = x;

	Node* locate = head;
 //pointer variable locate transverses through the list to find position i-1
	for (int j=0; j<i-1; ++j) {
	locate = locate->next;
	}
 //the new node points to the node which the (i-1)th node was pointing to, which in turn points to the new node
	temp->next = locate->next;
	locate->next = temp;
	//increases the elements by one, as the node is successfully added
	++n;
	}
}

void LinkedList::deletelast()
{ Node* locate = head;
	//locates the last second element
	for (int j=0; j<n-1; ++j) {
	locate = locate->next;
	}
	//tail points to the new end, and the previous one is removed from the list
	tail = locate;
	locate->next = NULL;
	--n;
}

void LinkedList::deleteAt(int i) {
	if (i >= n) {
	cout << "Linked List does not have that many elements \n";
	} else if (i == 0) {
	//changes the head so that the first element is no longer in the list
	head = head->next;
	--n;
	} else if (i == n-1) {
	//the tail shifts to the element before the last and the last element is detached from the list
	Node* locate = head;
	for (int j=0; j<i-1; ++j) {
	locate = locate->next;
	}

	tail = locate;
	locate->next = NULL;
	--n;
	} else { //locate pointer locates the (i-1)th element and makes it point to the (i+1)th element hence detaching the ith element from the list
	Node* locate = head;
	for (int j=0; j<i-1; ++j) {
	locate = locate->next;
	}

	locate->next = (locate->next)->next;
	--n;
	}
}

void LinkedList::display() {
	if (head == NULL) {//no element in the list
	cout << "The list is empty." << endl;
	} else {
	Node* temp = new Node;
	temp = head;
	cout<<endl;
	//temp pointer transverses through the list printing all elements
	while (temp != NULL) {
	cout << temp->data << endl;
	temp = temp->next;
	}
	}
}

int LinkedList::countElements()
{int j;
j=n;
	return j;}




int main() {
	LinkedList a;
	int c=0,val=0;
	cout<<"\n Enter the no of elements in the list";
	cin>>c;
	for(int i=0;i<c;i++)
	{
		cout<<"\n Enter the #"<<i+1<<"th entry :";
		cin>>val;
		a.insert(val);
	}
	cout<<"\n The original list is:";
	a.display();
	a.quicksort(1,c);
	cout<<"\n The sorted list is:";
	a.display();
	return 0;
}
