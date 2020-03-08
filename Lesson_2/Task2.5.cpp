#include <iostream>

using namespace std;

int main()
{
   int size = 0;
   cout << "Enter the size of tree: ";
   cin >> size;
   for (int rowNum = 1; rowNum <= size; rowNum++){
        for (int currentSpace = 0; currentSpace < size - rowNum; currentSpace++)
            cout << " ";
        for (int currentStar = 0; currentStar < rowNum * 2 - 1; currentStar++)
            cout << "*";
        cout << endl;
   }
   for (int spacesAmount = 1; spacesAmount < size; spacesAmount++ )
        cout << " ";
   cout << "*";


}
