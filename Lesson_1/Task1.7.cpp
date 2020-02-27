#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Enter your salary: ";
    cin >> a;
    if (a > 999999){
        cout << "You are millioner";
    }
    if (a < 1000000){
            if (a > 1000){
        cout << "Okey";
            }
    }
    if (a < 999){
        cout << "Work more";
    }
    cout << endl << "no ti molodec";
}
