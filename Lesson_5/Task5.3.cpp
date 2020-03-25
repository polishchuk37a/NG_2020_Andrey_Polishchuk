#include <iostream>
#include <math.h>

using namespace std;
int Enter_number(){
    cout << "Enter the number: ";
    int value;
    cin >> value;
    return value;
}
void GetSum(int num1){
    int num2;
    cout << "Enter the 2 number: ";
    cin >> num2;
    cout << "The sum of those numbers: " << num1 + num2;
}
int GetRes(int num1){
   int num2;
    cout << "Enter the 2 number: ";
    cin >> num2;
    cout << "The result of those numbers: " << num1 - num2;
}
void GetMul(int num1){
    int num2;
    cout << "Enter the 2 number: ";
    cin >> num2;
    cout << "The multiply of those numbers: " << num1 * num2;
}
void GetDiv(int num1){
   int num2;
    cout << "Enter the 2 number: ";
    cin >> num2;
    cout << "The div of those numbers: " << num1 / num2;
}
void GetSqrt(int num1){
    cout << "The sqrt of number: " << sqrt(num1);
}
void GetPow(int num1){
    int index = 1;
    int num2;
    int result = num1;
    cout << "Enter the power of number: ";
    cin >> num2;
    while(index < num2){
        result *= num1;
        index++;
    }
    cout << "The power is: " << result;
}

int main()
{
    int act = 0;
    int value1 = Enter_number();
    cout << "Enter the act <1: sum, 2: result, 3: multiply, 4: div, 5: sqrt, 6: power>: ";
    cin >> act;
    switch(act)
    {
        case 1:
            GetSum(value1);
            break;
        case 2:
            GetRes(value1);
            break;
        case 3:
            GetMul(value1);
            break;
        case 4:
            GetDiv(value1);
            break;
        case 5:
            GetSqrt(value1);
            break;
        case 6:
            GetPow(value1);
            break;
        default:
            cout << "Error";
    }
}
