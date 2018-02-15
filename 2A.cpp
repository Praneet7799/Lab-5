#include <iostream>
using namespace std;

#define MAX 1000 //The max no of elements in the array


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
		cout<<arr[i]<<"-->";
	}
	cout<<"END\n";
	quicksort(arr,0,c);

	cout<<"\n The sorted array :\n";
	for(int i=0;i<c;i++)
	{
		cout<<arr[i]<<"-->";
	}
	cout<<"END\n";

	return 0;
}
