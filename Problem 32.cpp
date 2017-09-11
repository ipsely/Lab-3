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
	cout<<"The first digit is "<<n<<" and "<<"the last digit is "<<a;
	return 0;
}
