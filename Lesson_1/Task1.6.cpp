#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout << "Vvedite 1-e chislo: ";
    cin >> a;
    cout << "Vvedite 2-e chsilo: ";
    cin >> b;
    cout << "Vvedite 3-e chislo: ";
    cin >> c;
    if (a*b==c or a*c==b or b*c==a)
        {
            cout << "Yes";
        }
    else if (a+b==c or a+c==b or b+c==a)
        {
            cout << "Yes";
        }
    else if (a-b==c or a-c==b or b-c==a)
        {
            cout << "Yes";
        }
    else if (a/b==c or a/c==b or b/c==a)
        {
            cout << "Yes";
        }
    else
        {
            cout << "No";
        }
    }

