//(Hypotenuse Calculations) Define a function hypotenuse that calculates the hypotenuse of a right triangle when the other two sides are given. The function should take two double arguments and return the hypotenuse as a double . Use this function in a program to determine the hypotenuse for each of the triangles shown below.
//Triangle 	Side 1 		Side 2
//1		3.0	 	4.0
//2		5.0		12.0
//3 		8.0		15.0
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double Hypotenuse(double , double );
int main()
{	
	double side1, side2;
	cout << setiosflags( ios::fixed | ios::showpoint );
	for(int i=1; i<=3; ++i)
	{
		cout<< "Enter 2 sides of right trinagle: ";
		cin>>side1>> side2;
		cout<<"Hypotenuse is:"<<setprecision( 1 )<<Hypotenuse(side1,side2)<<endl;
	}
	return 0;
}

double Hypotenuse(double s1, double s2)
{
	return sqrt(s1*s1 + s2*s2);

}
