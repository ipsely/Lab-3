#include <iostream>
using namespace std;
   
int main() {
	int m,n,a,b,lcm;
	cout<<"Enter two numbers :"<<endl;
	cin>>m>>n;
	a=m;
	b=n;
	while(m!=n)
	{
		if(m>n)
		{
			m=m-n;
		}
		else
		{
			n=n-m;
		}
	}
	lcm=(a*b)/m;
	cout<<"LCM is "<<lcm;
	
}      
            
