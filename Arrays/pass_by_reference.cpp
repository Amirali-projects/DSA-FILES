#include<iostream>
using namespace std;
void changeArray(int arr[],int size){
	 cout<<"Array before main()";
	 for(int i=0;i<size;i++){
	 	  arr[i]=arr[i]*2;
	 	  cout<<arr[i]<<endl;;
	 }
}

int main()
{
	int arr[]={1,2,3};
	changeArray(arr,4);
	cout<<"Array after main function";
	for(int i=0;i<3;i++){
		cout<<arr[i]<<endl;   // so changing before main will also change after main
	}
}
