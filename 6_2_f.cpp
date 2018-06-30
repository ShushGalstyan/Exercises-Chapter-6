//For the program in Fig. 6.34, state the scope (either function scope, global namespace scope, local scope or function-prototype scope) of each of the following elements:
//a) The variable x in main .
//b) The variable y in cube .
//c) The function cube .
//d) The function main .
//e) The function prototype for cube .
//f) The identifier y in the function prototype for cube .
#include <iostream>
using namespace std;
int cube( int y );
int main()
{
	int x;
	for (x =1; x<=10; ++x)
		cout<<cube(x)<<" ";
	cout<<endl;

}
int cube(int y)
{
	return y*y*y;
}
