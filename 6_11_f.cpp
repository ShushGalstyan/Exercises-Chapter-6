//(Multiples) Write a function multiple that determines for a pair of integers whether the second is a multiple of the first. The function should take two integer arguments and return true if the second is a multiple of the first, false otherwise. Use this function in a program that inputs a series of pairs of integers.
#include <iostream>
#include <cmath>
using namespace std;
bool multiple(int, int);
int main()
{
	int x, y;
	cout<< "Enter two integers: ";
	cin>>x>>y;
	if(multiple(x,y))
		cout<< y << " is multiple of " << x  << endl;
	else
		cout<< y << " is not multiple of " << x << endl;
	return 0;

}

bool multiple(int a, int b)
{
	return !(b % a);

}
