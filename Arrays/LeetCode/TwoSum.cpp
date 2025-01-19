# include<iostream>
using namespace std;
 void getSum(int *arr,int target,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<i<<j<<endl;
            }
        }
    }
 }
int main()
{
    int arr[]={2,7,11,15},target=9;
    int n=sizeof(arr)/sizeof(int);
    getSum(arr,target,n);
    
}
