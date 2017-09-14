#include <iostream>
using namespace std;

int main() {
 int num,  i;
    
    cout  <<  " Enter Any Number : "<<endl;
    cin >>  num;
    
    for (i=1;i<=num;i++)
    {
        if( num % i == 0 )
        {
            int j = 1, k = 0;
           for (j=1;j<=i;j++)
            {
                if( i % j == 0 )
                k++;
            
            }
            if( k == 2 )
            cout  <<  i  << " is a Prime Factor of "  <<  num <<endl;
        }
       
    }
    return 0;
}
