#include<iostream>
using namespace std;
void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}

int main()
{
	int arr[]={476,543,65,32};
	int n=sizeof(arr)/sizeof(n);
	int copyarr[n];
	for(int i=0;i<n;i++){
		int j=n-i-1;
		copyarr[i]=arr[j];
	}
	for(int i=0;i<n;i++){
		arr[i]=copyarr[i];
	}
	printArray(arr,n);
}
