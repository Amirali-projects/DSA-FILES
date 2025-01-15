#include<iostream>
using namespace std;
int main(){
	int n,arr[n];
	int smallest=INT_MAX;
	cout<<"Enter values in array"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		if(arr[i]<smallest){
			smallest=arr[i];
			cout<<"The smallest value in array is"<<smallest;
		}
	}
}







