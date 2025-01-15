//ABCDEF
//ABCDEF
//ABCDEF
//ABCDEF
//ABCDEF
//ABCDEF


# include<iostream>
using namespace std;
int main(){
	int n=6;
	for(int i=0;i<n;i++){
			char ch='A';
		for(int j=0;j<n;j++){
		 cout<<ch;
		 ch=ch+1; // A+1=>65+1=>66=>B
		}
		cout<<endl;  // After printing A to f the line will go to next line. 
	}
   
}
