#include <iostream>

using namespace std;

void addarr(int arr[],int size_of_arr, int number)
{
    for (int input = 0; input < size_of_arr; input++)
        cout << arr[input] * number << endl;

}
int main()
{
    int size_arr, input = 0, mul;

    cout << "Enter rhe size of array: ";
    cin >> size_arr;
    int ar[size_arr];
    for (input = 0; input < size_arr; input++){
        cout << "Enter the numbers in arr: ";
        cin >> ar[input];
    }
    cout << endl;

    cout << "Write the number on which you want to multiply all numbers in array: ";
    cin >> mul;


    addarr(ar, size_arr, mul);
}
