//(Exponentiation) Write a function integerPower( base , exponent ) that returns the value of/ base exponent For example, integerPower(3, 4) = 3 * 3 * 3 * 3 . Assume that exponent is a positive, nonzero integer and that base is an integer. Do not use any math library functions.
#include <iostream>
using namespace std;
int integerPower(int, int);
int main()
{
	int exp, base;
	cout << "Enter base and exponent: ";
	cin >> base >> exp;
	cout << base << " to the power " << exp << " is: "<< integerPower( base, exp ) << endl;

	return 0;
}
int integerPower(int b, int e)
{
	int product =1;
	for(int i=1; i<=e; ++i)
	{
		product *=b;
//		return product;
	}
	return product;
}
