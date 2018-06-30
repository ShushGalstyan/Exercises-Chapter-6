//Show the value of x after each of the following statements is performed:
//a) x = fabs( 7.5 )
//b) x = floor( 7.5 )
//c) x = fabs( 0.0 )
//d) x = ceil( 0.0 )
//e) x = fabs( -6.4 )
//f) x = ceil( -6.4 )
//g) x = ceil( -fabs( -8 + floor( -5.5 ) ) )
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	cout<<"x = fabs("<< 7.5 <<")" <<" = " <<fabs( 7.5 )<<endl;
        cout<<"x = floor("<< 7.5 <<")" <<" = " <<floor( 7.5 )<<endl;
        cout<<"x = fabs("<< 0.0 <<")" <<" = " <<fabs( 0.0 )<<endl;
        cout<<"x = ceil("<< 0.0 <<")" <<" = " <<ceil(0.0)<<endl;
        cout<<"x = fabs("<< -6.4 <<")" <<" = " <<fabs( -6.4 )<<endl;
        cout<<"x = ceil("<< -6.4 <<")" <<" = " <<ceil( -6.4 )<<endl;
        cout<<"x = ceil(-fabs( " << -8 <<" + floor("<< -5.5 <<") ) ) = "<<ceil(-fabs(-8 +floor(-5.5)))<<endl;


}
