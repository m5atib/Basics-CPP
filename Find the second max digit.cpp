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
cout<<"Enter a number to find second max digit : "; cin>>s;

	while (s!=0)
{
	digit=s%10; // to get digit
	if(digit>a) //for check the first larg digit 
		{
		b=a;
		a=digit;
		}
	else if(digit>b) //to check the second larg digit
		{
		b=digit;
		}	
	s/=10;
}
	cout<<a<<b<<endl;		
	return 0;
}