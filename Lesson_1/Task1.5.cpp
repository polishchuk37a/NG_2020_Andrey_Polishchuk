#include <iostream>

using namespace std;

int main()
{
  int a,b,c;
  cout << "Vvedite 1-e chislo: ";
  cin >> a;
  cout << "Vvedite 2-e chislo: ";
  cin >> b;
  cout << "Vvedite 3-e chislo: ";
  cin >> c;
  int d = b*b-4*a*c;
  int x1 = (-1*b+double(b*b-4*a*c))/2*a;
  int x2 = (-1*b-double(b*b-4*a*c))/2*a;
  if (d > 0)
    {
       cout << "x1 = " << x1 << endl;
       cout << "x2 = " << x2 << endl;
    }
  if (d == 0)
    {
        cout << "x1= " << x1 << endl;
    }
  if (d < 0)
    {
        cout << "net korney";
    }
}
