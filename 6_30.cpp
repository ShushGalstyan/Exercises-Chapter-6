//(Prime Numbers) An integer is said to be prime if it’s divisible by only 1 and itself. For example, 2, 3, 5 and 7 are prime, but 4, 6, 8 and 9 are not.
//a) Write a function that determines whether a number is prime.
//b) Use this function in a program that determines and prints all the prime numbers between 2 and 10,000. How many of these numbers do you really have to test before being sure that you’ve found all the primes?
//c) Initially, you might think that n/2 is the upper limit for which you must test to see whether a number is prime, but you need only go as high as the square root of n. Why? Rewrite the program, and run it both ways. Estimate the performance improvement.
#include <iostream>
using namespace std;
int prime(int value)
{
	for(int i =2; i<= value/2; ++i )
		if(value%i == 0)
			return false;
		return true;
}
int main()
{
	cout << "The prime numbers from 1 to 10000 are:\n";
	for (int i = 2; i<=10000; ++i)
		if( prime(i))
			cout<< i << " ";
	cout<<endl;
	return 0;
}
