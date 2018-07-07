//(Greatest Common Divisor) The greatest common divisor (GCD) of two integers is the largest integer that evenly divides each of the numbers. Write a function gcd that returns the greatest common divisor of two integers.
#include <iostream>
using namespace std;
int GCD(int a, int b)
{
	int GCD = 1;
	int greatest_num;
	if (a>b)
		greatest_num = a;
	else
		greatest_num = b;
	for(int i=2; i<= greatest_num; ++i )
		if((a%i==0) && (b%i ==0))
			GCD = i;
	return GCD;
}
int main()
{
	int x, y;
	cout<< "Enter two integer: ";
	cin>>x>>y;
	cout<<"The greatest common divisor (GCD) of two integers is: " << GCD(x,y);
	cout<<endl;
	return 0;
}
