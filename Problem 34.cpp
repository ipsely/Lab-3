#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,n1,n2,n3,p,s;
    int count=0;
    cout<<"Enter any number : "<<endl;
    cin>>n;
    n1=n;
    n2=n%10;
    while (n1>10)
    {
    	n1=n1/10;
    	count++;
    }
    p= pow (10,count);
    n3 =n -n2 + n1;
    s= (n3 % p) +  (n2 * p);
    cout<<"The number after being swapped is "<<s;
    return 0;
}
