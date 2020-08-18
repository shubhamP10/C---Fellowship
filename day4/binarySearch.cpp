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
		    cout << element << " found in the array at the location " << middle + 1 <<"\n"; 
            break; 
        } 
        else { 
            last = middle - 1; 
        } 
        middle = (first + last)/2; 
    }
    if(first > last)
	{
	   cout<< element <<" not found in the array";
	} 
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
    binarySearch(arr, 0, size-1 ,element);
    return 0;
}