# include<iostream>
using namespace std;
void printSum(int *arr,int n){
	int maxsum=INT_MIN;
for(int start=0;start<n;start++){
	int currsum=0;
	for(int end=start;end<n;end++){
		currsum+=arr[end];
		maxsum=max(currsum,maxsum);
	}
}
cout<<"Max sub Array sum ="<<maxsum;

}


int main()
{
	int arr[]={2,-3,6,-5,4,2};
	int n=sizeof(arr)/sizeof(int);
	printSum(arr,n);
	
}
