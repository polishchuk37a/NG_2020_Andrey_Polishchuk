#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    char d;
    cout << "Vvedite 1-e chislo: ";
    cin >> a;
    cout << "Vvedite 2-e chsilo: ";
    cin >> b;
    cout << "Vvedite 3-e chislo: ";
    cin >> c;
    cout << "Vvedite deystviye *,+,-,/: ";
    cin >> d;
    switch (d)
    {
    case '*':
        if (a*b==c or a*c==b or b*c==a)
            {
                cout << "Yes";
                break;
            }
    case '+':
        if (a+b==c or a+c==b or b+c==a)
            {
                cout << "Yes";
                break;
            }
    case '-':
        if (a-b==c or a-c==b or b-c==a)
            {
                cout << "Yes";
                break;
            }
    case '/':
        if (a/b==c or a/c==b or b/c==a)
            {
                cout << "Yes";
                break;
            }
    else
        {
            cout << "No";
        }
    }
}

