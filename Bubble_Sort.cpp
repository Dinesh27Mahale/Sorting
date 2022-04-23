#include<iostream>
using namespace std;

void swap(int arr[],int i,int j){
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
	return;
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
	
	//BUBBLE SORT
	
	for(int i=0;i<n-1;i++){
		bool swapped= false;     //extra modification/optimization if no futher swapping happened in this iteration
		for(int j=0;j<n-i-1;j++){
			if(arr[j+1]<arr[j]){
				swapped=true;
				swap(arr,j+1,j);
			}
		}
		if(!swapped){            // extra modification 
			break;
		}
	}
	
	//Print Sorted Array
	cout<<"Sorted array:";
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	return 0;
}
