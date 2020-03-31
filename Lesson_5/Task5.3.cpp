#include <iostream>
#include <math.h>

using namespace std;
int Enter_number(){
    cout << "Enter first number: ";
    int value;
    cin >> value;
    return value;
}
int Enter_the_second_number(){
    cout << "Enter the second number: ";
    int value2;
    cin >> value2;
    return value2;
}
void GetSum(int num1,int num2){
    cout << "The sum of those numbers: " << num1 + num2;
}
int GetRes(int num1,int num2){
    cout << "The result of those numbers: " << num2 - num1;
}
void GetMul(int num1,int num2){
    cout << "The multiply of those numbers: " << num1 * num2;
}
void GetDiv(int num1,int num2){
    cout << "The div of those numbers: " << num2 / num1;
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
    cout << "Enter the act <1: sum, 2: result, 3: multiply, 4: div, 5: sqrt, 6: power>: ";
    cin >> act;
    switch(act)
    {
        case 1:
            GetSum(Enter_the_second_number(),Enter_number());
            break;
        case 2:
            GetRes(Enter_the_second_number(),Enter_number());
            break;
        case 3:
            GetMul(Enter_the_second_number(),Enter_number());
            break;
        case 4:
            GetDiv(Enter_the_second_number(),Enter_number());
            break;
        case 5:
            GetSqrt(Enter_number());
            break;
        case 6:
            GetPow(Enter_number());
            break;
        default:
            cout << "Error";
    }
}
