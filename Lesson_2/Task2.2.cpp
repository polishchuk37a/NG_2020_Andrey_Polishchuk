#include <iostream>

using namespace std;

int main()
{
    int number,iterations = 0;
    cout << "Hello! How many numbers do You want to see? ";
    cin >> number;
    while(iterations < number){
        cout << iterations;
        iterations++;
        cout <<",";
    }
    cout << iterations;
}
