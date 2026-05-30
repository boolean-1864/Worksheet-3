#include <iostream>
using namespace std;

int main ()
{
	int x, y, temp;
	cout<<"Enter the value of x: ";
	cin>>x;
	cout<<"Enter the value of y: ";
	cin>>y;

	temp = x;
	x = y;
	y = temp;

	cout<<"The value of x is "<<x<<endl;
	cout<<"The Value of y is "<<y<<endl;

	return 0;
}
