//(Rounding Numbers) An application of function floor is rounding a value to the nearest integer. The statement y = floor( x + .5 ); rounds the number x to the nearest integer and assigns the result to y . Write a program that reads several numbers and uses the preceding statement to round each of these numbers to the nearest integer. For each number processed, print both the original number and the rounded number.
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void roundToIntegers(void);
int main()
{
	roundToIntegers ();
	return 0;

}

void roundToIntegers( void )
{
	double x, y;
	cout << setiosflags( ios::fixed | ios::showpoint );
	for (int loop =1; loop<=5; ++loop)
	{
		cout<<"Enter a number: ";
		cin >> x;
		y = floor(x + .5);
		cout<< x <<" rounded is " << setprecision(1)<<y<<endl;
	}
}
