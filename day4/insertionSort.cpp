#include <iostream>

using namespace std;

void insertionSort(int arr[], int size);

void printArray(int arr[], int size);

int main(){
    int size;
    cout << "Enter How Many Numbers to sort?" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter The Numbers: " << endl;
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Before Sorting: " << endl;
    printArray(arr, size);

    cout << "\nAfter Sorting: " << endl;
    insertionSort(arr, size);

    return 0;
}

// 13, 30, 5, 9, 14, 2
// 5 , 13, 30,

void insertionSort(int arr[], int size){
    int i , j, key;
    for (int i = 1; i < size; i++){
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
    printArray(arr, size);
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}
