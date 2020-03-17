#include <iostream>

using namespace std;

int main()
{
    int stars[5], counter = 0, row = 0, maximum = 0;
    for (int iterations = 0; iterations < 5; iterations++){
        cout << "Enter how much stars do you want to see in columns: ";
        cin >> stars[iterations];
    }
    while (counter < 5){
        if (maximum < stars[counter]){
            maximum = stars[counter];
        }
        counter++;
    }
    counter = 0;
    while (counter < maximum){
        row = 0;
        while (row < 5){
            if(counter < stars[row]){
                cout << "*";
            }
            else{
                cout<<" ";
            }
            row++;
        }
        cout << endl;
        counter++;
    }
}
