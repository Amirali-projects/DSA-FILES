//*
//**
//***
//****
//*****
//******

# include<iostream>
using namespace  std;
int main()
{
   int n=6;
   for(int i=0;i<n;i++){   // 0
   	for(int j=0;j<i+1;j++){ // 1 2 3 4 5
   		cout<<"*";
	   }
	   cout<<endl;
   }
}

//1
//22
//333
//4444
//55555
//666666
//7777777
//88888888
//999999999

#include <iostream>
using namespace std;
int main() {
    int n=16;
  for(int i=0;i<n;i++){
      for(int j=0;j<i+1;j++){   //  
          cout<<i+1;
      }
      cout<<endl;
  }

    return 0;
}




