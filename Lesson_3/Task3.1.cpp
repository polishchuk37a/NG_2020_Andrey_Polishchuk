#include <iostream>

using namespace std;

int main()
{
    int school[10];
    int your_school;
    int else_changer = 0;
    cout << "Enter numbers of schools." << endl;
    for (int iterations = 0; iterations < 10; iterations++){
        cout <<  iterations + 1 << ":";
        cin >> school[iterations];
    }
    cout << "Enter the number of your school: ";
    cin >> your_school;
    for(int arraychek = 0; arraychek < 10; arraychek++){
        if(your_school == school[arraychek]){
            else_changer = 1;
                cout << "I know this school!";
            break;
        }
    }
    if (else_changer == 0){
        cout << "I don't know this school!";
    }
}
