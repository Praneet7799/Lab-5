#include <iostream>
using namespace std;

#define MAX 1000 //The max no of elements in the array


void quicksort(int a[], int left, int right)
   {
   	int i = left, j = right-1;//The left end and right end of the elements
            int tmp;
            int pivot = a[(left + right) / 2];//pivot point set as middle element
            while (i <= j) 
            {
                   while (a[i] < pivot)
                   i++;                   // skipping the elemnts from left till a[i]<pivot
                   while (a[j] > pivot)
                   j--;                   // skipping the elemnts from right till a[j]>pivot
                   if (i <= j)            //if athe conditions fail then they are swapped
                   {
                           tmp = arr[i];
                           arr[i] = arr[j];
                           arr[j] = tmp;
                           i++;
                           j--;
                    }
       };
       if (left < j)              s
            quickSort(arr, left, j); 
      if (i < right)
            quickSort(arr, i, right);
}

int main() {
	int arr[MAX],c=0;
	cout<<"\n Enter the number of elements in the array";
	cin>>c;
	for(int i=0;i<c;i++)
	{
		cin>>arr[i];
	}
	cout<<"\n The original array :\n";
	for(int i=0;i<c;i++)
	{
		cout<<arr[k]<<"-->";
	}
	cout<<"END\n";
	quickSort(arr,0,c);
	
	cout<<"\n The sorted array :\n";
	for(int i=0;i<c;i++)
	{
		cout<<arr[k]<<"-->";
	}
	cout<<"END\n";
		
	return 0;
}
