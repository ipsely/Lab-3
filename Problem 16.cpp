#include <iostream>
using namespace std;

int main() {
	int s1,s2,s3;
	cout<<"Enter the three sides of a triangle: "<<endl;
	cin>>s1>>s2>>s3;
	if((s1==s2) && (s2==s3))
	{
		cout<<"The triangle is Equilateral.";
	}
	else if((s1==s2) || (s2==s3))
	{
		cout<<"The triangle is Isosceles.";
	}
	else
	{
		cout<<"The triangle is Scalene.";
	}
	
	return 0;
}
