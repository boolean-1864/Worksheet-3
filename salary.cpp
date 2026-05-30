#include <iostream>

using namespace std;

int main ()
{
	int TotalHour;
	float HourlyRate, GrossSalary, Tax, NetSalary;

	cout<<"Enter the total hours the employee has worked: ";
	cin>>TotalHour;
//cout<<endl;
	cout<<"Enter the hourly rate of pay for the employee:";
	cin>>HourlyRate;
	//cout<<endl;

	GrossSalary = TotalHour * HourlyRate;
	Tax = GrossSalary * 0.1;

	NetSalary = GrossSalary * Tax;

	cout<<"Net Salary = "<<NetSalary<<endl;

	return 0;
}
