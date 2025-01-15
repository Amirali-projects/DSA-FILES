#include<iostream>
using namespace std;
int main(){
	int n,arr[n],i,largest=INT_MIN;
	cout<<"How much values you want to store in array"<<endl;
	cin>>n;
	cout<<"Enter the values of array"<<endl;
	for( i=0;i<n;i++){
		cin>>arr[i];
	}
	for( i=0;i<n;i++){
		largest=max(arr[i],largest);
	}
	cout<<"The largest element of array is "<<largest;
}
