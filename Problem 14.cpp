#include <iostream>
using namespace std;

int main() {
	int a1,a2,a3;
	cout<<"Enter the three angles of a triangle: "<<endl;
	cin>>a1>>a2>>a3;
	if((a1+a2+a3)==180)
	{
		cout<<"The triangle is valid.";
	}
	else
	{
		cout<<"The triangle is not valid.";
	}
	
	return 0;
}
