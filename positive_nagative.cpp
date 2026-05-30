#include <iostream>
using namespace std;

int main ()
{
	int num;
	cout<<"Enter your number: ";
	cin>>num;
	if (num > 0)
	  {
	    if (num == 0)
	      cout<<"zero"<<endl;
	    else
	      cout<<num<<" is positive"<<endl;
	  }
	else
	  cout<<num<<" is negative"<<endl;
   return 0;
}
