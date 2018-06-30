//(Square of Any Character) Modify the function created in Exercise 6.22 to form the square out of whatever character is contained in character parameter fillCharacter . Thus, if side is 5 and fillCharacter is # , then this function should print the following:
//#####
//#####
//#####
//#####
//#####

#include <iostream>
using namespace std;
void display(int, char);
int main()
{
	int x;
	char c;
	cout << "Enter a character and the side length: ";
	cin>> c>>x;
	display(x,c);
	return 0;
}

void display(int x1, char c1)
{
	for(int i=1; i<=x1; ++i)
	{
		for(int j=1; j<=x1; ++j)
			cout << c1;
		cout<<"\n";
	}
	cout<<endl;
}
