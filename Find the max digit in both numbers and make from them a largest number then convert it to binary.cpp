#include <iostream>
using namespace std;
int maximum(int j)
{
	int maxxxxx, k; 
	k=j%10;
	maxxxxx=k;
	while(j!=0)
	{
		k=j%10;
		if (k>maxxxxx)
		{
			maxxxxx=k;
		}
		j/=10;
	}
	return maxxxxx;
}
int main()
{
	int num1,num2,zz,xx,decmal;
	cin>>num1>>num2;
	int a1,b2;
	a1=maximum(num1);
	b2=maximum(num2);
	if (a1>=b2)
	{
		zz=a1;
		xx=b2;	
	}
	else
	{
		zz=b2;
		xx=a1;	

	}
	int ooo,mmm=0,q,s=1;
	decmal=(10*zz)+xx;
	while (decmal!=0)
	{
		
		q=decmal%2;
		s=(s*10)+q;
		decmal/=2;
		
	}
	while (s!=0)
	{
		ooo=s%10;
		mmm=(mmm*10)+ooo;
		s/=10;
	}
	mmm/=10;
	cout<<mmm<<endl;
	
	return 0;
}