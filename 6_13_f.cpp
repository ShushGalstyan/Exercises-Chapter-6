//(Square of Asterisks) Write a function that displays at the left margin of the screen a solid square of asterisks whose side is specified in integer parameter side . For example, if side is 4 , the function displays the following:
//****
//****
//****
//****
#include <iostream>
using namespace std;
void display(int);
int main()
{
	int x;
	cout<< "Enter a side: ";
	cin >> x;
	display(x);
	return 0;
}

void display(int a)
{
	for(int i=1; i<=a; ++i)
	{
		for(int j =1; j<=a; j++)
			cout<< "*";
		cout<<"\n";
	}
	cout<<endl;
}
