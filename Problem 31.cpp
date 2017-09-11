#include <iostream>
using namespace std;

int main() {
	int n,a=0,m;
	cout<<"Enter any number to count number of digits."<<endl;
	cin>>n;
	m=n;
	while(n>0)
	{
		n=n/10;
		a++;
	}
	cout<<"The number of digits in "<<m<<" is "<<a;
	return 0;
}
