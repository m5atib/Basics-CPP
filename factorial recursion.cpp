#include<iostream>
using namespace std;

int factorial(int n);

int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factorial of " << n << " = " << factorial(n)<<endl;

    return 0;
}

int factorial(int n)
{
    if(n < 1)
     return 1 ;
    else
    return n * factorial(n - 1);
}
/*
f(5);
5*f(4);
f(4)=4*f(3);
f(3)=3*f(2);
f(2=2*f(1);
f(1)=1*f(0);
f(0)=1 >>return 1



*/