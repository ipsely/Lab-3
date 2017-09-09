#include <iostream>
using namespace std;

int main() {
            int i,n;
            int sum=0;
            cout<<"Sum of all natural numbers between 1 to : "<<endl;
            cin>>n;
            i=2;
	while(i<n)
	{
		sum=sum+i;
		i++;
	}
	cout<<"Sum is "<<sum;
	return 0;
}
