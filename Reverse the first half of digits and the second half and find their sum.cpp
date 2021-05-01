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
cout<<"Enter a number to Reverse the first half of digits and the second half and find their sum : "; cin>>c;
	while (c!=0)
	{
	k=c%10;
	c/=10;
	s=(s*10)+(k);
	count++; // counter digits
	if (c<=0)
	break;
	}
		k=0;
		p=count/2;
		v=count-(p);
	while (s!=0)
	{
		if (b<p)
		{
		k=s%10;
		s/=10;
		n=(n*10)+(k);
		}
		b++;
		if ((b>=p) && (b<count))
		{
			k=s%10;
			h=(h*10)+(k);
			s/=10;
		}
	}
	while (n!=0)
	{
		m=n%10;
		o=(o*10)+(m);
		n/=10;
	}
	while (h!=0)
	{
		z=h%10;
		g=(g*10)+(z);
		h/=10;
	}
	cout<<"The sum of it : "<<g+o<<endl;
	return 0;
}