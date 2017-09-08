#include <iostream>
using namespace std;
 
int main() {
	int maths, physics, biology, chemistry, computer, sum, percentage;
	cout << "Enter marks obtained in the five subjects :"<<endl;
	cin >>maths>>physics>>biology>>chemistry>>computer;
	sum = maths+physics+biology+chemistry+computer;
	percentage = sum / 5;
	if (percentage >= 90)
	{
		cout << "Grade A";
	}
	else if (percentage >= 80)
	{
		cout << "Grade B";
	}
	else if (percentage >= 70)
	{
		cout << "Grade C";
	}
	else if (percentage >= 60)
	{
		cout << "Grade D";
	}
	else if (percentage >= 40)
	{
		cout << "Grade E";
	}
	else if (percentage < 40)
	{
		cout << "Grade F";
	}
	else
	{
		cout << "Check the entered data.";
	}
	return 0;
}
