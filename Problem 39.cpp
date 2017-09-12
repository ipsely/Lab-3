#include <iostream>
using namespace std;

int main() {
    int n,n1,n2,a,i;
    cout<<"Enter any number :"<<endl;
    cin>>n;
    for (n1=0;n1<=9;n1++)
    {
    i=0;
    n2=n;
    while (n2!=0)
       {
    	a=n2%10;
    	n2=n2/10;
    if(a==n1)
          {
    	i++;
          }
    
        }
    cout<<"The frequency of "<<n1<<" is "<<i<<endl;
    }
    
    
    return 0;
}
