#include <iostream>

using namespace std;

void binarySearch(int arr[], int first, int last, int element){
    int middle = (first + last) / 2;

    while (first <= last)
	{
	   if(arr[middle] < element)
	   {
		first = middle + 1;

	   }
	   else if(arr[middle] == element){
		    cout << "\n" << element << " found in the array at the location " << middle + 1 <<"\n";
            break;
        }
        else {
            last = middle - 1;
        }
        middle = (first + last)/2;
    }
    if(first > last)
	{
	   cout<< element <<" \nnot found in the array";
	}
}

void bubbleSort(int arr[], int size ,int element){
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

    cout << "Sorted Array :" << endl;
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    binarySearch(arr, 0, size-1 ,element);
}

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

    bubbleSort(arr, size, element);
    return 0;
}
