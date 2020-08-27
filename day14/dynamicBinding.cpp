#include <iostream>
using namespace std;

class A{
    public:
         void display(){
            cout << "Class A display function." << endl; 
        }

       virtual void print(){
            cout << "Class A print function" << endl;
        }
};

class B : public A{
     public:
        void display(){
            cout << "Class B display function." << endl; 
        }

        void print(){
            cout << "Class B print function" << endl;
        }
};

int main(){
    A *a = new B();
    a->display();
    a ->print();
    return 0;
}