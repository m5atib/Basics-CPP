#include <iostream>
using namespace std;
int gcd(int n1,int n2) 
{
	while(n1!=n2)
	{
		if (n1>n2)
		{
			n1=n1-n2;
		}
		else
		{
			n2=n2-n1;
		}
	}
	return n1;
}
// GCD(12/16)
//n1=12>>12-4>>8>>8-4>>4
//n2=16>>16-12>>4
int main()
{
	int x,y;
	cout<<"Enter two Rational number to get them in simplest form :" <<endl;
	cin>>x>>y;
	int u;
	u=gcd(x,y);
	x=x/u;
	y=y/u;
	cout<<x<<"/"<<y<<endl;
	return 0;
}