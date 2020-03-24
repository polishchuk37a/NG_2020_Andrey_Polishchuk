#include <iostream>

using namespace std;

int main()
{
   int cards[10], number, money, sum = 0;
   cout << "Your balance on 10 cards" << endl;
   for (int i = 0; i < 10; i++){
       cards[i] = 0;
       cout << cards[i] << " ";
   }
   cout << endl;
   while(true){
        cout << "Enter the number of card to put money: ";
        cin >> number;
        cout << "How much do you want to put? ";
        cin >> money;
        cards[number - 1] = cards[number - 1] + money;
        for (int b = 0; b < 10; b++){
            cout << cards[b] << " ";
        }
        cout << endl;
        sum = 0;
        for (int a = 0; a < 10; a++){
            sum += cards[a];
        }
        cout << "Your sum on all cards: " << sum << endl;
  }
}
