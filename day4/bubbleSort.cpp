/**
 * ALGORITHM - Bubble Sort
 * begin BubbleSort(list)

   for all elements of list
      if list[i] > list[i+1]
         swap(list[i], list[i+1])
      end if
   end for
   
   return list
   
end BubbleSort
*/
#include <iostream>

using namespace std;

void bubbleSort(int arr[], int size);

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
    bubbleSort(arr, size);
    
    return 0;
}

void bubbleSort(int arr[], int size){
    bool swapped;
    for (int i = 0; i < size - 1 ; i++){
        for(int j = 0; j < size - i - 1; j++){
            if (arr[j] > arr[j+1]){
                std::swap(arr[j], arr[j+1]);
                swapped = true;
            } 
        }
        if (swapped == false){
            break;
        }  
    }
    printArray(arr, size);
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }  
}