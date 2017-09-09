#include <iostream>
using namespace std;

int main() {
            int i,n,mul;
            cout<<"Enter the number to print it's multiplication table"<<endl;
            cin>>n;
	for(i=1;i<=10;i++)
	{
		mul=n*i;
		cout<<n<<"*"<<i<<"="<<mul<<endl;
	}
	return 0;
}
