//(Rounding Numbers) Function floor can be used to round a number to a specific decimal place. The statement
//y = floor( x * 10 + .5 ) / 10;
//rounds x to the tenths position (the first position to the right of the decimal point). The statement
//y = floor( x * 100 + .5 ) / 100;
//rounds x to the hundredths position (the second position to the right of the decimal point). Write a program that defines four functions to round a number x in various ways:
//a) roundToInteger( number )
//b) roundToTenths( number )
//c) roundToHundredths( number )
//d) roundToThousandths( number )
//For each value read, your program should print the original value, the number rounded to the nearest integer, the number rounded to the nearest tenth, the number rounded to the nearest hundredth and the number rounded to the nearest thousandth.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double roundToInteger( double );
double roundToTenths( double );
double roundToHundredths( double );
double roundToThousandths( double );
int main()
{
	int count;
	double number;
	cout<< "How many numbers do ypu want to process? " << setiosflags(ios::fixed);
	cin>>count;	
	for(int i=0; i< count; ++i)
	{
		cout<< "Enter a number : ";
		cin >> number;
		cout << number << " rounded to the nearest integer is: "<< setprecision( 0 ) << roundToInteger( number ) << '\n'<< setiosflags( ios::showpoint )<< number << " rounded to the nearest tenth is: "<< setprecision( 1 ) << roundToTenths( number ) << '\n'<< number << " rounded to the nearest hundredth is: " << setprecision( 2 ) << roundToHundredths( number ) << '\n'<< number << " rounded to the nearest thousandth is: "<< setprecision( 3 ) << roundToThousandths( number ) << '\n'<< resetiosflags( ios::showpoint );
	}
	return 0;
}




double roundToInteger(double n)
{
	return floor(n + .5);
}
double roundToTenths( double n )
{
	return floor(n * 10 + .5) /10;
}
double roundToHundredths( double n )
{
	return floor(n*100 + .5)/100;
}
double roundToThousandths( double n )
{
	return (n*1000 +.5 ) /1000.0;
}


