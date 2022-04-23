#include<iostream>
using namespace std;

int main(){
int n;
	cout<<"Enter array size:";
	cin>>n;
	
	int arr[n];
	cout<<"Enter array:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	//Insertion Sort
	for(int i=0;i<n;i++){
		int temp=arr[i];
		int j=i-1;
		
		while(j>=0 && arr[j]>temp){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
			
		}
	cout<<"Sorted Array is:";
	
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	
	
	return 0;
	}	
