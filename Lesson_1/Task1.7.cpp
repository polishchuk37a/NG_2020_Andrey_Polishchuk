#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "vvedite zarplaty: ";
    cin >> a;
    if (a > 999999){
        cout << "ti millioner";
    }
    if (a > 1000){
        if (a < 1000000){
            cout << "horosho";
        }
    }
    if (a < 1001){
        cout << "rabotai bolshe";
    }
    cout << endl << "no ti molodec";
}
