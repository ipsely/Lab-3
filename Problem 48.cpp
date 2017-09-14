#include<iostream>
using namespace std;
int main()
{ 
     int n,i,j,c;
     cout<<"Enter the number upto which you want to print the prime number"<<endl;
     cin>>n;
     cout<<"The prime numbers are ";
     for(i=2;i<=n;i++)
     {
        c=0;
        for(j=2;j<=i/2;j++)
        {
          if(i%j==0)
          {   c=1;
             break;
          }
        }
        if(c==0&&n!=0)
          cout<<i<<endl;
     }
     return 0;
}
