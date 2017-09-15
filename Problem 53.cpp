#include <iostream>
using namespace std;

int main()
{
int n,a=0,i=1;
cout<<"Enter any number : "<<endl;
cin>>n;
while (i<n)
{
if(n%i==0)
{
	a=a+i;
	
}
i++;
}
if(a==n)
    cout << n << " is a perfect number"; 
else
    cout << n << " is not a perfect number";
   
return 0;
}
