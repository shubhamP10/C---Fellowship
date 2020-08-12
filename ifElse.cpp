#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;

    if (a < b)
    {
        cout << "a is greater\n";
    }
    else
    {
        cout << "b is greater";
    }

    int c = (a < b ) ? a : b;
    cout << "Value of C : " << c;
    
    return 0;
}