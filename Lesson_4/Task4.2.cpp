#include <iostream>

using namespace std;

int main()
{
    char str[100];
    int length = 0, maxlen = 0, word, index = 0;
    cout << "Enter the sentence: ";
    cin.getline(str, 100);
    while (str[index] != NULL){
        if (str[index] >= 'a' && str[index] <= 'z'){
            length++;
        }else {
            if (length > maxlen){
                maxlen = length;
                word = index - maxlen;
            }
            length = 0;
        }
        if(str[index + 1] == 0){
            if (length > maxlen){
                maxlen = length;
                word = index - maxlen + 1;
            }
        }
        index++;
    }
    cout << "The largest word in this sentence is: ";
    for(int i = 0; i < maxlen; i++){
        cout << str[word];
        word++;
    }
}
