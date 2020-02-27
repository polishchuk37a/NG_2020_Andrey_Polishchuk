#include <iostream>

using namespace std;

int main()
{
   int a,b,c;
   cout << "Vvedite 1 chislo: ";
   cin >> a;
   cout << "Vvedite 2 chislo: ";
   cin >> b;
   cout << "Vvedite chislo dlya vibora deystviya (1+,2-,3*,4/): ";
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
