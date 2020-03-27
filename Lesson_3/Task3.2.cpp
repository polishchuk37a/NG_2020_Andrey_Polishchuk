#include <iostream>

using namespace std;

int main()
{
   int cards[10], number, money, sum = 0;
   cout << "Your balance on 10 cards" << endl;
   for (int show_balance = 0; show_balance < 10; show_balance++){
       cards[show_balance] = 0;
       cout << cards[show_balance] << " ";
   }
   cout << endl;
   while(true){
        cout << "Enter the number of card to put money: ";
        cin >> number;
        cout << "How much do you want to put? ";
        cin >> money;
        cards[number - 1] = cards[number - 1] + money;
        for (int show_new_balance = 0; show_new_balance < 10; show_new_balance++){
            cout << cards[show_new_balance] << " ";
        }
        cout << endl;
        sum = 0;
        for (int add_balance_on_cards = 0; add_balance_on_cards < 10; add_balance_on_cards++){
            sum += cards[add_balance_on_cards];
        }
        cout << "Your sum on all cards: " << sum << endl;
  }
}
