#include <iostream>
using namespace std;

int main() {
	int a;
	cout<<"Enter the number you want to check :";
	cin>>a;
	if(a<0)
	{
		cout<<"The number is negative.";
	}
	else if(a>0)
	{
		cout<<"The number is positive.";
	}
	else
	{
		cout<<"The number is zero.";
	}
	return 0;
}
