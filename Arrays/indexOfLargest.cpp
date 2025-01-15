#include<iostream>
using namespace std;
int main()
{
	int n,arr[n],i,largest=INT_MIN,count=-1;
	cout<<"How much elements do you want to store in the array"<<endl;
	cin>>n;
	cout<<"Enter the values of array"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		
		if(largest<arr[i]){
				count++;
			largest=arr[i];
			
		}
	}
		cout<<"The index of largest value is"<<count<<"which is "<<largest; //index=7
}
