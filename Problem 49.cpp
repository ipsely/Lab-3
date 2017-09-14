#include <iostream>
using namespace std;

int main() {
int n,k,s=0;
cout << "Enter a number : "<<endl;
cin >> n;
cout << "Prime Numbers between 1 to "<<n<<" are :"<<endl;
for( k=1 ; k<n ; k++)
{
int j=0,i;
for( i=1 ; i<=k ; i++)
{
	if(k%i==0)
	  j++;
}
if(j==2)
  s=s+k;
}
cout<<"The sum of all prime numbers between 1 to "<<n<<" is "<<s;
return 0;
}
