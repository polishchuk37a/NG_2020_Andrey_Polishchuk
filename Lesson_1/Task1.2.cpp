#include <iostream>

using namespace std;

int main()
{
  int n;
  cout << "Vvesite skolko shishek sobrala belka: ";
  cin >> n;
  int m;
  cout << "Vvedite skolko oreshkov sobrala belka: ";
  cin >> m;
  int k;
  cout << "Vvedi skolko shishek s oreshkami nado belke: ";
  cin >> k;
  if (n*m >= k){
    cout << "Yes";
  }
  if (n*m < k){
    cout << "No";
  }
}
