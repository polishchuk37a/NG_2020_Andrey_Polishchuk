#include <iostream>

using namespace std;

int main()
{
   int stars[20], maxvalue = 0, steps = 0, iterations = 0, space = 0, star = 0;
    while (iterations < 20)
    {
        cout << "Enter the " << iterations + 1 << " line of stars: ";
        cin >> stars[iterations];
        if (stars[iterations] == 0){
            break;
        }
        if (stars[iterations] > maxvalue){
                maxvalue = stars[iterations];
        }
        steps = iterations + 1;
        iterations++;

    }
    for (iterations = 0; iterations < steps; iterations++){
        while(space < (maxvalue - stars[iterations]) / 2){
                cout << " ";
                space++;
        }
        while (star < stars[iterations]){
                cout << "*";
                star++;
        }
        space = 0;
        star = 0;
        cout << endl;
    }
}
