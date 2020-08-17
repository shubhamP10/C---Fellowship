#include <iostream>

using namespace std;

int reverseTheNumber(int number);

int main(){
    int number, reverseNumber;

    cout << "Enter a Number: ";
    cin >> number;

    reverseNumber = reverseTheNumber(number);

    if (number == reverseNumber){
        cout << "Number is Palindrome" << endl;
        return 0;
    }
    cout << "Number is Not a Palindrome";
    return 0;
}

int reverseTheNumber(int number){
    int digit, rev = 0;

    do{
        digit = number % 10;
        rev = (rev * 10) + digit;
        number = number / 10;
    } while(number != 0);

    return rev;
}