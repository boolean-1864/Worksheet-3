#include <iostream>

using namespace std;

int main() 
{
			/* radius = r
			   area = a
			   circumference = c */
	float a, r, c;
	cout<<"Enter the radius of the circle: ";
	cin>>r;

	a = r*r*3.14;
	c = 2*3.14*r;
	
	cout<<"Area = "<<a<<endl;
	cout<<"Circumferance = "<<c<<endl;
return 0;

}
