#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int GetSum(int sizecube, int cube){
  int result = 0;

  srand(time(NULL));

  for(int counter = 0; counter < cube; counter++)
      result += (rand()%sizecube+1);

  return result;
}
int main()
{
    int sizecube, cube;
    cout << "Enter the amount of cubes: ";
    cin >> cube;
    cout << "Enter the size of a cube: ";
    cin >> sizecube;
    cout << endl << "The sum of points: " << GetSum(sizecube,cube) << endl;
}
