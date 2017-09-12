#include <iostream>
using namespace std;

int main() {
  int i,n,p,a=1;
  cout<<"Enter the number you want to find the power of :"<<endl;
  cout<<"Enter the power to which you want to raise the number :"<<endl;
  cin>>n;
  cin>>p;
  for(i=0;i<p;i++)
  {
      a=a*n;	
  }
  cout<<n<<" raised to the power "<<p<<" is "<<a;
    return 0;
}
