#include <iostream>
using namespace std;
   
int main() {
	int i,n,f=0;
	cout<<"Enter any number :"<<endl;
	cin>>n;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			f=1;
			break;
		}
		
	}
	if(f==0)
	{
	            cout<<n<<" is a Prime Number";
	}
	else
	{
		cout<<n<<" is not a Prime Number";
	}
}          
            
