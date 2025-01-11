// Print the following

//012345
//012345
//012345
//012345
//012345
//012345


#include<iostream>
using namespace std;
int main(){
	int n=6;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<j;
		}
		cout<<endl; // After printing numbers to five the line will end.
	}
}



//1234
//1234
//1234
//1234

# include<iostream>
using namespace std;
int main(){
    int n=4;
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           cout<<j+1;       // here not i as loop will never terminate till value of j is not less than n.
       }
       cout<<endl;
   }
   
}






