#include <iostream>

using namespace std;

int main()
{
   char strng[100];
   int words = 0, iterations = 0;
   bool space = true;
   cout << "Write a sentance pls: ";
   cin.getline(strng, 100);
   while(strng[iterations] != 0){
    if (strng[iterations] == ' ')
        space = true;
        else
        if (space){
            space = false;
            words++;
        }
    iterations++;
   }
   cout << "The amount of words: " << words;
}
