#include <iostream>
using namespace std;

int main() {
	int n,a;
	cout<<"Enter any number : "<<endl;
	cin>>n;
	a=n%10;
	while (n>=10)
	{
		n=n/10;
	}
	cout<<"The sum of first and last digit is "<<a+n ;
	return 0;
}
