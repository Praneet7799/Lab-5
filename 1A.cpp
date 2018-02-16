#include <iostream>
using namespace std;

#define MAX 100 


void bubblesort(int a[], int b)
{
	
	int t;
	for(int i=0;i<b;i++)
	{
	for(int j=0;j<b-1;j++)
	{
		if(a[j]>a[j+1])                         
    //Comparing the adjacent two elemnts of the array
		{                                    
    //Swapping them in ascending order
			t=a[j];                
			a[j]=a[j+1];             
			a[j+1]=t;
		}
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
		cout<<arr[i]<<"-->";
	}
	cout<<"END\n";
	bubblesort(arr,n);
	
	cout<<"\n The sorted array :\n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"-->";
	}
	cout<<"END\n";
		
	return 0;
}
