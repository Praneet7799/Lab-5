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


int main() {
	int arr[MAX],n=0;
	cout<<"\n Enter the number of elements in the array";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"\n The original array :\n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[k]<<"-->";
	}
	cout<<"END\n";
	bubblesort(arr,n);
	
	cout<<"\n The sorted array :\n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[k]<<"-->";
	}
	cout<<"END\n";
		
	return 0;
}
