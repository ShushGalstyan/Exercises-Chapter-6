//(Even Numbers) Write a program that inputs a series of integers and passes them one at a time to function isEven , which uses the modulus operator to determine whether an integer is even. The function should take an integer argument and return true if the integer is even and false otherwise.
#include <iostream>
using namespace std;
bool even(int);
int main()
{
	int number;
	for (int i =0; i<3; ++i)
	{
		cout << "Enter a number: ";
		cin >> number;
		if (even(number))
			cout<<number << " is an even number."<<endl;
		else 
			cout <<number<< " is  an odd  number."<< endl;
	}
	return 0;
}

bool even(int a)
{
	return !(a%2);
}
