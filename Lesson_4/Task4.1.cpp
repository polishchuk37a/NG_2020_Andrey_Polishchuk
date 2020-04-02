#include <iostream>

using namespace std;

int main()
{
    char strng[50];
    int index = 0, counter = 0, word = 0;
    cout << "Enter your string: ";
    cin.getline(strng, 100);
    while(strng[index] != 0){
        if((strng[index] >= 'a' && strng[index] <= 'z') || (strng[index] >= 'A' && strng[index] <= 'Z')){
            counter++;
        }
        if(!((strng[index] >= 'a' && strng[index] <= 'z') ||
            (strng[index] >= 'A' && strng[index] <= 'Z')) &&
            counter > 0)
        {
            word++;
            counter = 0;
        }
        index++;
    }
    if(counter > 0){
        word++;
    }
    cout << "Words: " << word << endl;
}
