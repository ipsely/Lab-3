#include <iostream>
using namespace std;

int main()
{
   char ch;
    cout << "Enter an alphabet :"<<endl;
    cin >> ch;

    
    if(ch >= 'A' && ch <= 'Z')
    {
        cout << ch << " is an Uppercase Alphabet";
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        cout << ch << " is a Lowercase Alphabet";
    }
    else
    {
        cout << ch << " is not an Alphabet";
    }
    return 0;
}
