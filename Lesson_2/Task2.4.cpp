#include <iostream>

using namespace std;

int main()
{
    int a;
    char f;
    cout << "Press a,b or c to choice the figure: ";
    cin >> f;
    cout << "What is the size of this figure? ";
    cin >> a;
    switch (f)
    {
     case 'a':
       for (int i = 0; i <= a; i++){
         for (int b = 0; b < i; b++){
             cout << "*";
         }
        cout << endl;
       }
       break;

     case 'b':
       for (int i = 1; i <= a; i++){
         for (int c = i; c <= a; c++){
             cout << "*";
         }
        cout << endl;
       }
       break;

     case 'c':
       for (int b = 1; b <= a; b++){
         for (int c = 2; c <= b; c++){
            cout << " ";
         }
            for (int k = b; k <= a; k++){
                cout << "*";
         }
        cout << endl;
       }
       break;
     default:
         cout << "Error";

   }
}

