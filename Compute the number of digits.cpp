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
	int digit,a=0;
	int choise,m,v,b=0,g=0,h=0,o=0,n=0,z=0;
	char option;
//******************************************************************************
cout<<"Enter a number to Compute the number of digits : "; cin>>c;
	while (c!=0)
	{
	k=c%10;
	c/=10;
	s=(s*10)+(k);
	count++; // counter digits

	}
	
	cout<<"The number of digits : "<<count<<endl;
	return 0;
}