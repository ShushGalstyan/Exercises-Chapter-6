//(Separating Digits) Write program segments that accomplish each of the following:
//a) Calculate the integer part of the quotient when integer a is divided by integer b .
//b) Calculate the integer remainder when integer a is divided by integer b .
//c) Use the program pieces developed in (a) and (b) to write a function that inputs an integer between 1 and 32767 and prints it as a series of digits, each pair of which is separated by two spaces. For example, the integer 4562 should print as follows: 4 5 6 2
#include <iostream>
#include <iomanip>
using namespace std;
int quotient( int, int );
int remainder( int, int );
int main()
{
	int number, div = 10000;
	cout<<"Enter an number between 1 to 32767: ";
	cin>>number;
	cout<<"The digit in the number is: ";

	while(number>1)
	{
		if(number>=div)
		{
			cout<<setw(3)<<quotient(number, div);
			number = remainder(number, div);
			div= quotient(div, 10 );
		}
		else
			div = quotient(div, 10);
	
	}
	cout<< endl;
	return 0;
}

int quotient( int a, int b )
{
	return a / b;
}
int remainder( int a, int b )
{
	return a % b;
} 
