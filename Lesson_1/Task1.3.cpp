#include <iostream>

using namespace std;

int main()
{
     int a,b,c;
    cout << "Vvedite zarplaty pervogo rabochego: ";
    cin >> a;
    cout << "Vvedite zarplaty vtorogo rabochego: ";
    cin >> b;
    cout << "Vvedite zarplaty tretego rabochego: ";
    cin >> c;
    if(a > b and b > c and a > c){
       cout << a-c;
    }
    if(a > c and c > b and a > b){
       cout << a-b;
    }
    if(b > c and c > a and b > a){
       cout << b-a;
    }
    if(b > a and a > c and b > c){
       cout << b-c;
    }
    if(c > a and a > b and c > b){
       cout << c-b;
    }
    if(c > b and b > a and c > a){
       cout << c-a;
    }
}
