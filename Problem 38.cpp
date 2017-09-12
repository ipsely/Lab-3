#include <iostream>
using namespace std;

int main() {
    int n,l,m,rev=0;
   
    cout<<"Enter any number :"<<endl;
    cin>>n;
    m=n;
    while (n!=0)
    {
    	l=n%10;
    	rev=(rev*10)+l;
    	n=n/10;
    }
    if (rev==m)
    {
    cout<<m<<" is a palindrome.";
    }
    else
    {
     cout<<m<<" is not a palindrome.";	
    }
    return 0;
}
