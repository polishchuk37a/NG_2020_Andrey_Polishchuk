#include <iostream>

using namespace std;

int main()
{
    char sentence[100];
    int iterations = 0;

    cout << "Enter please your sentence: ";
    cin.getline(sentence, 100);

    while (sentence[iterations] != NULL){
        if (sentence[iterations] >= 'a' && sentence[iterations] <= 'z'){
                cout << char(sentence[iterations] - ' ');
        }
        else
        cout << sentence[iterations];
        iterations++;
    }
    cout << endl;
}
