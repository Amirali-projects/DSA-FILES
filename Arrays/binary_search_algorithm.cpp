// In binary search Algorithm we half the array and then check one half only to find key. 
// The T.C of binary seach is so good than the 
// linear seach which in O(logn) because in binary 
// search we half the array in each iteration. So
// binary search is useful to search a key from a 
// sorted array.

# include<iostream>
using namespace std;

int BinarySearch(int *arr,int n,int key){
int start=0,end=n-1;
while(start<=end){
	int mid=(start+end)/2;
	if(arr[mid]==key){
		return mid;
	}
	else if(arr[mid]>key){
		start=mid+1;
	}
	else if(arr[mid]<key){
		end=mid-1;
	}
}
return -1;
}

int main()
{
	int arr[]={3,6,9,8,6,45,23};
	int n=sizeof(arr)/sizeof(int);
	cout<<BinarySearch(arr,n,8);
	return 0;
	
}
