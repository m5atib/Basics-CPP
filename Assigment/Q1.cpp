#include <iostream.h>
int main()
{
	int x , sum=0 ,k;
	cout<<"enter the num :"; cin>>x;
	cout<<"[ ";
	for (int i=1 ; i<=x ; i++){
		if (i%2){
			cout<<i<<" ,";
			sum+=i;
		}
	}
	cout<<"]. \nthe sum of the digit of entered number is : "<<sum<<endl;
	return 0;
}