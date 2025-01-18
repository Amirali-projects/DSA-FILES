
// Pointers can traverse the whole array after printing the *ptr
// and then incrementing it points to next element.


#include<iostream>
using namespace std;
void checkArrayPtr(int *ptr,int n){
	for(int i=0;i<n;i++){
		cout<<*(ptr+i)<<endl;
	}
}
int main()
{
	
	int arr[]={1,22,3,4,5,6,7};
	int n=sizeof(arr)/sizeof(int);
	
	checkArrayPtr(arr,n);
	
	
	
	
}
