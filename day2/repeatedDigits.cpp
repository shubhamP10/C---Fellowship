#include <iostream>

using namespace std;

int main(){
    int number = 0;
    int arr[20];

    for (int i = 1; i <= 100; i++)
    {
        if (i % 11 == 0)
        {
            arr[number] = i;
            number++;
        }
    }

    cout << "Repeated Digits Between 1 - 100 are :" << endl;

    for (int i = 0; i < number; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
