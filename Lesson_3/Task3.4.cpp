#include <iostream>

using namespace std;

int main()
{
    int a[5], counter = 0, row = 0, maximum = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter how much stars do you want to see in columns: ";
        cin >> a[i];
    }
    while (counter < 5)
    {
        if (maximum < a[counter])
        {
            maximum = a[counter];
        }
        counter++;
    }
    counter=0;
    while (counter < maximum)
    {
        row = 0;
        while (row < 5)
        {
            if(counter < a[row])
            {
                cout << "*";
            }
            else
            {
                cout<<" ";
            }
            row++;
        }
        cout << endl;
        counter++;
    }
}
