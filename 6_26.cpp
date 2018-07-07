//(Calculating Number of Seconds) Write a function that takes the time as three integer arguments (hours, minutes and seconds) and returns the number of seconds since the last time the clock “struck 12.” Use this function to calculate the amount of time in seconds between two times, both of which are within one 12-hour cycle of the clock.
#include <iostream>
using namespace std;
unsigned second(unsigned, unsigned,  unsigned);
int main()
{
	int  hours, minutes, secs, temp;
	cout<<"Enter the first time as three integers: ";
	cin>>hours>> minutes>>secs;
	temp = second(hours, minutes, secs);
	cout<<"Enter the second  time as three integers: " ;
	cin>>hours>>minutes>> secs;
	cout<<"The difference between the time is  "<<second(hours, minutes, secs) - temp << " seconds"<<endl;
	return 0;

}

unsigned second(unsigned hours, unsigned minutes, unsigned secs )
{
	return 3600 * (hours>=12 ? hours-12 : hours) + (minutes * 60) + secs;
}
