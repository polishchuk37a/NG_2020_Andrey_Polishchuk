#include <iostream>

using namespace std;

int main()
{
   int a;
   cout << "Hello! Please write the size of square: ";
   cin >> a;
   for (int i=0; i < a; i++){
        for (int b=0; b < a; b++){
           cout << "*";
        }
   cout << endl;
   }
}
