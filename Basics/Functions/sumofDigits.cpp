# include<iostream>
using namespace std;
int sumofDigits(int num){
	int sum=0;
	while(num>0){
		int rem=num%10;   // As 54/10 remainder=4 
		num/=10;          
		sum+=rem;
	}
	return sum;
}
int main()
{
	cout<<"Sum of digits ="<<sumofDigits(54);
}
