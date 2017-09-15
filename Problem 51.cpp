#include <iostream>
using namespace std;

int main()
{
int n,a,d,m;
cout<<"Enter any number : "<<endl;
cin>>n;
m=n;
while(n!=0)
{
d=n%10;
a=a+(d*d*d);
n=n/10;
}
if(m==a)
{
cout<<m<<" is an Armstrong Number.";
}
else
{
cout<<m<<" is not an Armstrong Number.";
}
return 0;
}
