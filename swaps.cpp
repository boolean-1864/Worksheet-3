#include <iostream>
using namespace std;

int main ()
{
	int x, y, temp, r, q;
	cout<<"Enter the value of x: ";
	cin>>x;
	cout<<"Enter the value of y: ";
	cin>>y;
/*
	temp = x;
	x = y;
	y = temp;
*/
	r = x*y/x;
	q = y*x/y;
	cout<<"The value of x is "<<r<<endl;
	cout<<"The Value of y is "<<q<<endl;

	return 0;
}
