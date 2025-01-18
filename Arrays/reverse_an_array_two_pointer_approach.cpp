// using two asterick approach
#include<iostream>
using namespace std;
void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
	cout<<arr[i]<<endl;
	}
	}
int main(){
	int arr[]={6,7,4,3,5,9};
	int n=sizeof(arr)/sizeof(int);
	int start=0;
	int end=n-1;
	while(start<end){
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
	printArray(arr,n);
	
  
	
}
