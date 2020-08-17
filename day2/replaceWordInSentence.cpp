#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main(){
    int count = 0;
    string str, s1, s2, temp;
    string sentance[20];
    
    cout << "Enter a sentance." << endl;
    getline(cin, str);
    cout << "Enter word to replace" << endl;
    cin >> s1;
    cout << "Enter word to replace with" << endl;
    cin >> s2;
    for (int i = 0; i < str.length(); i++){
        if (str[i] == ' ')
        {
            count++;
            continue;
        }
        sentance[count] = sentance[count] + str[i];
    }

    for (int i = 0; i <= count; i++){
        if (sentance[i] == s1){
            sentance[i] = s2;
        }
        cout << sentance[i] << " ";
    }
} 