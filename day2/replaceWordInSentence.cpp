#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    string str1 = "Hi, This is Java Language";
    
    cout << "Original Sentence: " << str1 << endl;
    str1.replace(12, 4, "C++");

    cout << "\nAfter Replace: " << str1 << endl;

    return 0;
}