#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int coin = (rand() % 2 + 1);
    if (coin == 1)
    {
        cout << "Head";
    }
    else
    {
        cout << "Tail";
    }
    return 0;
}