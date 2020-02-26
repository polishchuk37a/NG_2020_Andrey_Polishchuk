#include <iostream>

using namespace std;

int main()
{
   int a,b,c;
   cout << "Vvedite 1 chislo: ";
   cin >> a;
   cout << "Vvedite 2 chislo: ";
   cin >> b;
   cout << "Vvedite 3 chislo: ";
   cin >> c;
   switch(c)
   {
     case 1:
     cout << a + b;
     break;

     case 2:
     cout << a - b;
     break;

     case 3:
     cout << a * b;
     break;

     case 4:
     cout << a / b;
     break;
     default:
        cout << "oshibka";
   }

}
