#include <iostream>
#include <math.h>
using namespace std;

int main() {
float root1,root2,a,b,c,d,imaginaryPart,realPart;
    cout<<"Quadratic Equation is ax^2+bx+c=0"<<endl;
    cout<<"Enter values of a,b and c:"<<endl;
    cin>>a>>b>>c;
    
    d=(b*b)-(4*a*c);
    
    if(d>0)
    {
        cout<<"Two real and distinct roots"<<endl;
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        cout<<"Roots are "<<root1<<" and "<<root2<<endl;
    }
    else if(d==0)
        {
            cout<<"Two real and equal roots"<<endl;
            root1=root2=-b/(2*a);
            cout<<"Roots are "<<root1<<" and "<<root2<<endl;
        }
        else{
            cout<<"Roots are complex and imaginary"<<endl;
            realPart = -b/(2*a);
            imaginaryPart = sqrt(-d)/(2*a);
            cout<<"Roots are "<<realPart<<"+"<<imaginaryPart<<"i and "<<realPart<<"-"<<imaginaryPart<<"i";
        }

	return 0;
}
