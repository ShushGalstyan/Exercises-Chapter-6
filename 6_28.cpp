//(Find the Minimum) Write a program that inputs three double-precision, floating-point numbers and passes them to a function that returns the smallest number.
#include <iostream>
#include <cmath>
using namespace std;
double smallest1(double ,double , double );
float smallest2(float, float, float);

int main()
{
	float n1, n2,n3;
	double n4, n5, n6;
	cout<< "Enter three floating-point number: ";
	cin>>n1>> n2>> n3;
	cout<<"Minimum number is: "<< smallest2(n1,n2,n3)<< endl;
	cout<<"Enter three double number: ";
	cin>>n4>> n5>>n6;
	cout<<"Minimum number is: "<< smallest1(n4, n5, n6)<<endl;

	return 0;

}
double smallest1(double smallest,double b, double c)
{
	if(b<smallest && c> smallest)
		return b;
	else if(c< smallest )
		return c;
	else 
		return smallest;

}


float smallest2(float smallest, float b, float c)
{
        if(b<smallest && c> smallest)
                return b;
        else if(c< smallest )
                return c;
        else
                return smallest;
}
