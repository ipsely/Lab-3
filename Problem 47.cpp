         
#include <iostream>
using namespace std;

int main() {
int a,j,i;
cout << "Enter a number : "<<endl;
cin >> a;
for( i=1 ; i<=a ; i++)
{
	if(a%i==0)
	  j++;
}
if(j==2)
  cout << "Prime Number";
  else
   cout << "Not a Prime Number";
return 0;
}          
