#include <iostream>
using namespace std;

int main() {
	float bsal, gross, hra, da;
	cout << "Enter the Basic Salary of an employee."<<endl;
	cin >> bsal;
	if (bsal <= 10000)
	{
		hra = 0.20 * bsal;
		da = 0.80 * bsal;
		cout << "Gross = "<< gross;
		
	}
	else if (bsal <= 20000)
	{
		hra = 0.25 * bsal;
		da = 0.90 * bsal;
		gross = bsal + hra + da;
		cout << "Gross = "<< gross;
	}
	else if (bsal > 20000)
	{
		hra = 0.30 * bsal;
		da = 0.95 * bsal;
		gross = bsal + hra + da;
		cout << "Gross = "<< gross;
	}
	else
	{
		cout << "Check the entered data.";
	}
	
	return 0;
}
