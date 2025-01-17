#include<iostream>
using namespace std;
int linearSearch(int arr[],int size,int target){
	for(int i=0;i<size;i++){
		if(arr[i]==target){
			return i;
		}
	}
	return -1;
}

int main(){
	int arr[]={7,8,5,4,6,3},size=6,target=6;
	cout<<linearSearch(arr,size,target);
}




