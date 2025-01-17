// using two asterick approach
#include<iostream>
using namespace std;
	void ReverseAnArray(int arr[],int size){
		int start=0,end=size-1;
		while(start<end){    
			swap(arr[start],arr[end]);
			start++;
			end--;
		}
	}


int main()
{
	
	int arr[]={5,7,8,3,2,6,9},size=7;
	ReverseAnArray(arr,size);
	for(int i=0;i<size;i++){
		cout<<arr[i];
	}
}
