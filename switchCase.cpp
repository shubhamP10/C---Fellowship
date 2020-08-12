#include <iostream>
using namespace std;

int main(){
    int day = 4;
    switch (day)
    {
    case 1:
        cout << "Sunday";
        break;
    case 2:
        cout << "Monday";
        break;    
    case 3:
        cout << "Tuesday";
        break;
    case 4:
        cout << "Wednesday";
        break;
    default:
        break;
    }
    return 0;
}