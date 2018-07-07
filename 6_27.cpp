//(Celsius and Fahrenheit Temperatures) Implement the following integer functions:
//a) Function celsius returns the Celsius equivalent of a Fahrenheit temperature.
//b) Function fahrenheit returns the Fahrenheit equivalent of a Celsius temperature.
//c) Use these functions to write a program that prints charts showing the Fahrenheit equivalents of all Celsius temperatures from 0 to 100 degrees, and the Celsius equivalents of all Fahrenheit temperatures from 32 to 212 degrees. Print the outputs in a neat tabular format that minimizes the number of lines of output while remaining readable.
#include <iostream>
using namespace std;
int celcius( int );
int fahrenheit( int );
int main()
{
	cout << "Fahrenheit equivalents of Celcius temperatures:\n"<< "Celcius\t\tFahrenheit\n";
	for ( int i = 0; i <= 100; ++i )
		cout << i << "\t\t" << fahrenheit( i ) << '\n';
	cout << "\nCelcius equivalents of Fahrenheit temperatures:"<< "\nFahrenheit\tCelcius\n";
	for ( int j = 32; j <= 212; ++j )
		cout << j << "\t\t" << celcius( j ) << '\n';
		cout << endl;
	return 0;
}
int celcius( int fTemp )
{
	return static_cast< int > ( 5.0 / 9.0 * ( fTemp - 32 ) );
}
int fahrenheit( int cTemp )
{
	return static_cast< int > ( 9.0 / 5.0 * cTemp + 32 );
}
