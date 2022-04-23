#include<iostream>
using namespace std;

void swap(int arr[],int i,int min){
	int temp=arr[i];
	arr[i]=arr[min];
	arr[min]=temp;
	return ;
}

int main(){
int n;
	cout<<"Enter array size:";
	cin>>n;
	
	int arr[n];
	cout<<"Enter array:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	//Selection Sort   :- Find the minimum element in the unsorted array and place it in proper/ original position 
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		if(min!=i){
			swap(arr,i,min);
		}
	}
	//Print sorted array
	cout<<"Sorted Array is:";
	
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	
	
	return 0;
}
