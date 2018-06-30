//(Parking Charges) A parking garage charges a $2.00 minimum fee to park for up to three hours. The garage charges an additional $0.50 per hour for each hour or part thereof in excess of three hours. The maximum charge for any given 24-hour period is $10.00. Assume that no car parks for longer than 24 hours at a time. Write a program that calculates and prints the parking charges for each of three customers who parked their cars in this garage yesterday. You should enter the hours parked for each customer. Your program should print the results in a neat tabular format and should calculate and print the total of yesterday’s receipts. The program should use the function calculateCharges to determine the charge for each customer. Your outputs should appear in the following format:
//Car	Hours	Charge
//1	1.5	2.00
//2	4.0	2.50
//3	24.0	10.00
//TOTAL	29.5	14.50
#include <iostream>
using namespace std;
#include <iomanip>
#include <cmath>
double calculateCharges( double );
main()
{
	double hour, currentCharge, totalCharges = 0.0, totalHours = 0.0;
	int first = 1;
	int i;
	cout << "Enter the hours parked for 3 cars: ";
	for ( int i = 1; i <= 3; i++ ) {
		cin >> hour;
		totalHours += hour;

		if ( first)
		{
			cout <<setw( 5 ) << "Car" << setw( 15 ) << "Hours"<<setw( 15 ) << "Charge\n";
			first = 0;// prevents this from printing again
		}
		totalCharges += ( currentCharge = calculateCharges( hour ) );
		cout << setiosflags( ios::fixed | ios::showpoint )<< setw( 3 ) << i << setw( 17 ) << setprecision( 1 ) << hour<< setw( 15 ) << setprecision( 2 ) << currentCharge << "\n";
	}	
		cout << setw( 7 ) << "TOTAL" << setw( 13 ) << setprecision( 1 )<< totalHours << setw( 15 ) << setprecision( 2 )<< totalCharges << endl;
	return 0;
}

double calculateCharges( double hours )
{
	double charge;
	if ( hours < 3.0 )
		charge = 2.0;
	else if ( hours < 19.0 )
		charge = 2.0 + .5 * ceil( hours - 3.0 );
	else
		charge = 10.0;
	return charge;

}


