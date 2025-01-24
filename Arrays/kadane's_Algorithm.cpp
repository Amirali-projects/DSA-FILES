
// Only one loop will be used if the value of currsum is less than the 0 means in negative
// then we reinitialize it with 0. 

#include<iostream>
using namespace std;
void maxSubArray (int *arr,int n){
	int currSum=0;
	int maxSum = INT_MIN;
	
	for(int i=0;i<n;i++){
		currSum+=arr[i];
		maxSum=max(maxSum,currSum);
		if(currSum<0){
			currSum=0;
		}
	}
	cout<<"The maximum subArray sum is"<<maxSum<<endl;
}
int main()
{
	int arr[]={2,-3,6,-5,4,2};
	int n=sizeof(arr)/sizeof(int);
	maxSubArray(arr,n);
	return 0;
}
