#include <iostream>
using namespace std;

#define MAX 100


void bubblesort(int a[], int b)
{

	int p,q,t;
	for(int i=0;i<b;i++)
	{
		p=0;
		q=1;
	for(int j=0;j<b-1;j++)
	{
		if(a[p]>a[q])
    //Comparing the adjacent two elemnts of the array
		{
    //Swapping them in ascending order
			t=a[p];
			a[p]=a[q];
			a[q]=t;
		}
		p++;
		q++;
	}
	}

}

void quicksort(int arr[], int left, int right)
   {
   	int i = left, j = right-1;//The left end and right end of the elements
            int tmp;
            int pivot = arr[(left + right) / 2];//pivot point set as middle element
            while (i <= j)
            {
                   while (arr[i] < pivot)
                   i++;                   // skipping the elemnts from left till a[i]<pivot
                   while (arr[j] > pivot)
                   j--;                   // skipping the elemnts from right till a[j]>pivot
                   if (i <= j)            //if athe conditions fail then they are swapped
                   {
                           tmp = arr[i];
                           arr[i] = arr[j];
                           arr[j] = tmp;
                           i++;
                           j--;
                    }
       }
       if (left < j)
            quicksort(arr, left, j);
      if (i < right)
            quicksort(arr, i, right);
}

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
	void display();
	int countElements();
  void bubblesort()
	{
		int b=countElements();
		Node* p;
		Node* q;
		Node* t;
	for(int i=0;i<b;i++)
	{
		p=head;;
		q=head->next;
	for(int j=0;j<b-1;j++)
	{
		if(p->data>q->data)                         //Comparing the adjacent two elemnts of the list
		{                                    //and swapping them in ascending order
			t->data=p->data;                 //and this is iterated for every node
			p->data=q->data;             //And this way the list is processed n(no of node) times
			q->data=t->data;
		}
		p=p->next;
		q=q->next;

	}
	}

}
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

int main()
{/* Table
                     100      1000      10000      20000
Bubble sort array   2.547     2.256     3.417      2.554
   LL               3.163     2.264     2.902      2.852
Quick sort  array   2.085     2.911     3.656      4.447
   LL               3.953     2.740     5.646      13.707 
   */
return 0;}
