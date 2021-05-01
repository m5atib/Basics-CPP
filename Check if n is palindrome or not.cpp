#include <iostream>
using namespace std;
int main()
{
	int count=0;
	int k,s=0,x;
	int i;
	int c;
	int p;
	int pe;
	int digit,a=0,b=0;
	int choise;
	char option;
//******************************************************************************
cout<<"Enter a number to check if it Palindrome or NOT : "; cin>>p;
x=p; // a first value.
	while (p!=0)
	{
		k=p%10;
		s=(s*10)+k; //make the number to one vlaue after recsive.
		p/=10;
	}

	if (s==x) // check ?
	{
		cout<<"Number "<<x<<" is Palindrome"<<endl;
	}
	else
	cout<<"Number "<<x<<" is  NOT Palindrome"<<endl;

			
	return 0;
}