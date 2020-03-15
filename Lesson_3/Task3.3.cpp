#include <iostream>

using namespace std;

int main()
{
   int stars[20],maxvalue = 0, steps = 0, i = 0, n = 0, m = 0;
    while (i < 20)
    {
        cout << "Enter the " << i + 1 << " line of stars: ";
        cin >> stars[i];
        if (stars[i] == 0)
        {
            break;
        }
        steps = i + 1;
        i++;
    }
    for (i = 0; i < steps; i++)
    {
        if (stars[i] > maxvalue)
        {
            maxvalue = stars[i];
        }
    }
    for (i = 0; i < steps; i++)
    {
        while (m < stars[i])
        {
            while(n < (maxvalue - stars[i]) / 2)
            {
                cout << " ";
                n++;
            }
            cout << "*";
            m++;
        }
      n = 0;
      m = 0;
      cout << endl;
    }

}
