// This is not an optiimized solution it is brute fore approach
// Time complexity of this code will be O(n3) as three loops are executing n times.


#include<iostream>
using namespace std;
void printSubArray(int *arr,int n){
		int maxsum=INT_MIN;
	
	for(int start=0;start<n;start++){
		for(int end=start;end<n;end++){
			int currsum=0;
         for(int i=start;i<=end;i++){
           currsum+=arr[i];
		}
		 cout<<currsum<<",";
		 maxsum=max(maxsum,currsum);
}
		
		cout<<endl;
    }
		
	cout<<"Maximum sub Array sum ="<<maxsum;
	}
	

int main()
{
	
	int arr[]={2,-3,6,-5,4,2};
	int n=sizeof(arr)/sizeof(int);
	printSubArray(arr,n);
	
}
