#include <iostream>

using namespace std;

int main(){
     int size, element, i;
    cout << "Enter Array Size: " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter Array Elements: " << endl;
    for (i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Enter Search Element: " << endl;
    cin >> element;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            cout << "Element Found @Position: " << i << endl;
            break;
        }
    }
    if (i != size)
    {
        cout << "Element Not Found!!!" << endl;
    }
    
    return 0;
}