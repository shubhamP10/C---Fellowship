#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int headCounter = 0, tailCounter = 0;
    while (true)
    {
        int coin = (rand() % 2 + 1);
        if (coin == 1)
        {
            cout << "Head\n";
            headCounter++;
            if (headCounter == 11)
            {
                cout << "Head Count: " << headCounter << endl;
                cout << "Head Won\n";
                break; 
            }
            
        }
        else
        {
            cout << "Tail\n";
            tailCounter++;
            if (tailCounter == 11)
            {
                cout << "Tail Count: " << tailCounter << endl;
                cout << "Tail Won\n";
                break; 
            }
        }
    }
    return 0;
}