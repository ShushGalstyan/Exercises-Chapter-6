//(Perfect Numbers) An integer is said to be a perfect number if the sum of its divisors, including 1 (but not the number itself), is equal to the number. For example, 6 is a perfect number, because 6 = 1 + 2 + 3. Write a function isPerfect that determines whether parameter number is a  perfect number. Use this function in a program that determines and prints all the perfect numbers between 1 and 1000. Print the divisors of each perfect number to confirm that the number is indeed perfect. Challenge the power of your computer by testing numbers much larger than 1000.
#include <iostream>
using namespace std;
int perfect(int value)
{
	int perfectSum = 1;
	for(int i = 2; i<= value/2; ++i)
		if(value%i==0)
			perfectSum += i;
	return perfectSum == value ? true : false;
}
int main()
{	
	for(int i =2; i<=1000; ++i)
		if(perfect(i))
			cout<<i<<" is perfect number.\n";
	cout<<endl;
	return 0;

}
