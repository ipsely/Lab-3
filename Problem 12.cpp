#include <iostream>
using namespace std;

int main()
{
   int month;
   
    cout << "Enter month number (1-12): ";
    cin >> month;
    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
      cout << month <<" month has 30 days.";
    }
		
    else if (month == 2)
    {
      cout << month <<" month has 28 days or 29 days if it's a leap year.";		
    }

    else 
    {
      cout << month <<" month has 31 days.";
    }  

    return 0;
}
