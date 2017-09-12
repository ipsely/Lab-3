#include <iostream>
using namespace std;

int main() {
    int n,l,rev=0;
    cout<<"Enter any number :"<<endl;
    cin>>n;
    while (n!=0)
    {
    	l=n%10;
    	rev=(rev*10)+l;
    	n=n/10;
    }
    cout<<"The reverse of the number is "<<rev;
    return 0;
}
