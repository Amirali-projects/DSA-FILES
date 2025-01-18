# include<iostream>
using namespace std;

void name(int *a){
	*a=20;
	cout<<*a;
}


int main()
{
	int a=10;
	name(&a);
	cout<<a;

}
