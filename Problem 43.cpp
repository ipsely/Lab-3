#include <iostream>
using namespace std;

int main() {
	int n,i;
	cout<<"Enter any number :"<<endl;
	cin>>n;
	cout<<"The factors of the number "<<n<<" are ";
	for (i=1;i<=10;i++)
	{
		if (n%i==0)
		{
			cout<<i<<",";
		}
	}
	return 0;
}
