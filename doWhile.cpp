#include <iostream>
using namespace std;

int main(){
    int i = 2;
    do
    {
        i++;
        if ( i == 4)
        {
            continue;
        }
        
        cout << i << endl;
        
    } while (i <= 10);
    return 0;
}