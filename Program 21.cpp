#include <iostream>
using namespace std;

int main() {
	float units, bill, sbill;
	cout << "Enter the Electricity Unit Charges."<<endl;
	cin >> unit;
	if (units<=50)
	{
		bill=units*0.50;
	}
	else if(units<=150)
	{
		bill=(50*0.50)+((units-50)*0.75);
	}
	else if(units<=250)
	{
		bill=(50*0.50)+(100*0.75)+((units-150)*1.20);
	}
	else
	{
		bill=(50*0.50)+(100*0.75)+(250*1.20)+((units-250)*1.50);
	}
	sbill=bill+(bill*0.20)
	cout<<"The total electricity bill is "<<sbill;
	return 0;
}
