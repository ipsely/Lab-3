#include <iostream>
using namespace std;

int main()
{
int n,a,i,j;
cout<<"Enter any number : "<<endl;
cin>>n;
for(i=1; i<=n; i++)
    {
       a = 0;
        for(j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                a = a + j;
            }
        }
 
        
        if(a == i)
        {
            cout<<i<<endl;
        }
    }
return 0;
}
