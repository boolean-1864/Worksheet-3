#include <iostream>
using namespace std;

int main () 
{
	int day, month, year;
	int leap;	
	cout<<"Enter the day: ";
	cin>>day;
	cout<<"Enter the month: ";
	cin>>month;
	cout<<"Enter the year: ";
	cin>>year;
//if month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12
//if month == 4 || month == 6 || month == 9 || month 11

	if (year%4==0)
	{
		if (year%100==0)
		{
			if (year%400==0)
			{
				//cout<<"leap Year";
				//day++;
				leap = 1;
			}
			else 
				cout<<"not leap year";
			leap = 0;
		}
		else
			//cout<<"leap year";
			leap = 1;
		//day++;

	}
	else
	{
		cout<<"Not leap year";
		leap = 0;
	}
	cout<<"The next dd/mm/yy: ";
	if (leap == 1 && month == 2 && day == 29)
	{
		day = 1;
		cout<<day<<"/"<<++month<<"/"<<year<<endl;
	}
	
if (leap == 0 && month == 2 && day == 28)
{
day = 1; 
++month;
cout<<day<<"/"<<month<<"/"<<year<<endl;
}
/*else 
	{
		day++;
		cout<<day<<"/"<<month<<"/"<<year<<endl;
	}*/
if (day == 31 && month == 12)
{
day = 1;
month = 1;
++year;
cout<<"Happy New year";
cout<<day<<"/"<<month<<"/"<<year<<endl;
}
	return 0;
}
