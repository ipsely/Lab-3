#include <iostream>
using namespace std;
 
int main() {
 
	int a, b, big;
	cout<<"Enter two numbers you want to compare : ";
	cin>>a>>b;
	if(a>b)
	{
		big=a;
	}
	else
	{
		big=b;
	}
	cout<<"Biggest of the two numbers is "<<big;
	return 0;
}
