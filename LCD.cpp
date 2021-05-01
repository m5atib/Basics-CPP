#include <iostream>
using namespace std;
int lcm(int b1,int b2)
{
	int max,lcdmax;
	max=(b1>b2) ? b1:b2 ; //max btwen b1 & b2 store in max
	do
	{
		if ((max%b1==0) && (max%b2==0))
		{
			lcdmax=max;
			break;
		}
		else
		{
			++max;
		}
	}while (true);
	return lcdmax;
}
//b1=12
//b2=16+1+...=48 
//48%12 && 48%16 ==0 lcd=48
int main()
{
	int n,k;
	cin>>n>>k;
	cout<<lcm(n,k)<<endl;
	return 0;
}