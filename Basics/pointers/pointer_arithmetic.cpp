// when we increment a pointer variable then 
// its value is not incremented but its address location in memory
// increases. It depends upon how much a datatype(integer) takes.if it takes 4bytes then 
// variable increments 4 times forward. 
# include<iostream>
using namespace std;
int main(){
	int a=10;
	int *b=&a;
	cout<<b;//0x6ffe14
	b++;
	cout<<b;//0x6ffe18
}
