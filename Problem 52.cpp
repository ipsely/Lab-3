#include <iostream>
using namespace std;

int main()
{
int n,a,d,m,i;
cout<<"Enter any number : "<<endl;
cin>>n;

cout<<"Armstrong numbers between 1 to "<<n<<" are :"<<endl;
for(i=1;i<=n;i++)
{
m=i;
a=0;
while(m!=0)
{
d=m%10;
a=a+(d*d*d);
m=m/10;
}
if(i==a)
cout<<a<<endl;

}
return 0;
}
