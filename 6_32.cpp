//(Quality Points for Numeric Grades) Write a function qualityPoints that inputs a student’s average and returns 4 if a student’s average is 90–100, 3 if the average is 80–89, 2 if the average is 70–79, 1 if the average is 60–69 and 0 if the average is lower than 60.
#include <iostream>
using namespace std;
int qualityPoints(int Point)
{
	if(Point>=90 && Point<=100)
		return 4;
        else if(Point>=80 && Point<=89)
                return 3;
        else if(Point>=70 && Point<=79)
               	return 2;
        else if(Point>=60 && Point<=69)
                return 1;
	else
		return 0;

}
int main()
{
	int average;
	cout<<"Enter student's average: ";
	cin>> average;
	cout<<endl;
	cout<<"Student quality point is: "<< qualityPoints( average )<<endl;

}
