/**
 * sequence -> arrays, vectors, dqueue, list
 * 
 *  */



#include <iostream>
#include <array>
#include <vector>
#include <list>

using namespace std;

int main() {

    //ARRAYS Example

    array<int, 6> arr = {1, 2, 10, 20};
    array<int, 6> arr2 = {11, 22, 101, 2010};
    array<int, 0> arr3;

    cout << "Value at(5) = " << arr.at(5) << endl;

    cout << "Value [5] = " << arr[5] << endl;

    cout << "first Element = " << arr.front() << endl;

    cout << "Last Element = " << arr.back() << endl;

    cout << "Size = " << arr.size() << endl;

    cout << "Max size = " << arr.max_size() << endl;

    arr.swap(arr2);

    (arr3.empty()) ? cout << "Array is empty\n" : cout << "not mty\n"; 

    arr.fill(11111);

    for(int item : arr) {
        cout << item << endl;
    }


    //VECTORS Example

    vector<int> vtr;

    vtr.push_back(100);
    vtr.pop_back();
    cout << "initial Vector capacity = " << vtr.capacity() << endl;

    if(vtr.empty()) {
        cout << "empty\n";
    }
    else {
        cout << "Not Empty\n";
    }

    vtr.reserve(10);

    if(vtr.empty()) {
        cout << "empty\n";
    }
    else {
        cout << "Not Empty\n";
    }

    vtr.resize(5);
    
    if(vtr.empty()) {
        cout << "empty\n";
    }
    else {
        cout << "Not Empty\n";
    }

    // vtr.shrink_to_fit();
    vtr.assign(3, 10);
    vtr.push_back(100);
    // vtr.push_back(101);
    // vtr.push_back(102);
    // vtr.push_back(103);
    // vtr.push_back(104);
    // vtr.push_back(105); //doubles the capacity
    cout << "initial Vector size = " << vtr.size() << endl;
    cout << "initial Vector max_size = " << vtr.max_size() << endl;
    cout << "initial Vector capacity = " << vtr.capacity() << endl;

    int count = 0;
    for(int item : vtr) {
        cout << "item at " << count << " " << item << endl;
        count++;
    }
    cout << "===========================\n";
    vector<int>::iterator itr = vtr.begin();
    // itr += 1;
    vtr.erase(itr, itr+3);
    count = 0;
    for(int item : vtr) {
        cout << "item at " << count << " " << item << endl;
        count++;
    }

    // LIST Example

    list<int> myList;
    cout << "Size = " << myList.size() << endl;

    myList.push_back(15);
    cout << "Size = " << myList.size() << endl;

    return 0;
}