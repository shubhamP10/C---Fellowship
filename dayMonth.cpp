#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    bool result = 0;
    int day = 0, month = 0;
    int combo = 0;
    int st = 1;

    cout << "Enter Date: ";
    cin >> day;
    cout << "Enter Month: ";
    cin >> month;

    if (month >= 3 && month <= 6)
    {
        int dilimit = 30 + (month % 2); 
        if (day > 1 && day < dilimit)
        {
            combo = (month * 100 ) + day;
            if (combo > 320 && combo < 620)
            {
                result = 1;
                st = 0;
            }            
        }        
    }  
    if(result == 1)
        cout << month << " / " << day << ": True" << endl;  
    else
         cout << month << " / " << day << ": False" << endl;
    return 0;
}