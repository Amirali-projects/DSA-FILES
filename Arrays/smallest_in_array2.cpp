#include<iostream>
using namespace std;
int main(){
	int n,arr[n],smallest=INT_MAX;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
		for(int i=0;i<n;i++){
	   smallest=min(arr[i],smallest);
	}
	cout<<"Smallest is "<<smallest<<endl;
	
}
