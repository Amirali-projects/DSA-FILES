#include<iostream>
using namespace std;
int main()
{
	int n,arr[n],i,largest=INT_MIN;
	cout<<"How much elements do you want to store in the array"<<endl;
	cin>>n;
	cout<<"Enter the values of array"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		if(largest<arr[i]){
			largest=arr[i];
		}
	}
		cout<<"Largest is "<<largest<<endl;
}
