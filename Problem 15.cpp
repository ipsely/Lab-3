#include <iostream>
using namespace std;

int main() {
	int s1,s2,s3;
	cout<<"Enter the length of three sides of the triangle: "<<endl;
	cin>>s1>>s2>>s3;
	if((s1+s2>s3) && (s1+s3>s2) && (s2+s3>s1))
	{
		cout<<"The triangle is valid.";
	}
	else
	{
		cout<<"The triangle is not valid.";
	}
	
	return 0;
}
