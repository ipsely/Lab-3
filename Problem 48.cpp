#include <iostream>
using namespace std;

int main() {
int n,k;
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
  cout << k << endl;
}
return 0;
}
