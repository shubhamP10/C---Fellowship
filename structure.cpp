#include <iostream>
using namespace std;

typedef struct
{
    string title;
    int id;
} books;

int main(){
    books b;
    b.id = 10;
    b.title = "Book Name";   

    cout << "ID: " << b.id << " Book Name: " << b.title;
}