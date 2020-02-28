#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Enter your salary: ";
    cin >> a;
    if(a < 1000)
    {
        cout << "You need to work more";
    }
    if(a > 999)
    {
        if(a > 999999)
        {
          cout << "You are a millioner";
        }
        if(a < 1000000)
        {
          cout << "Okey";
        }
    }
    cout << endl << "But you are a good boy :)";

}
