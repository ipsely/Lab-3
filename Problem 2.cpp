#include <iostream>
using namespace std;

int main() {
	
	int a, b, c, big;
	cout<<"Enter three numbers you want to compare : ";
	cin>>a>>b>>c;
	if(a>b && a>c)
	{
		big=a;
	}
	if(b>a && b>c)
	{
		big=b;
	}
	if(c>a && c>b)
	{
		big=c;
	}
	
	cout<<"Biggest of the three numbers is "<<big;
	return 0;
}
