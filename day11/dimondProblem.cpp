#include <iostream>

using namespace std;

class A {
    public:
        A() {
            display();
        }
        void display() {
            cout << "Class A\n";
        }
};

class B : virtual public A {
    public:
        B() {
            cout << "Calling A() from B()\n";
            A();
        }
        void callDisplay() {
            cout << "Class B Calling Display of A\n";
            display();
        }
};

class C :virtual public A {
    public:
        C() {
            cout << "Calling A() from C()\n";
            A();
        }

        void callDisplay() {
            cout << "Class C Calling Display of A\n";
            display();
        }
};

class D : public B, public C {
    public:
         D() {
            cout << "Class D Constructor\n";
        }

        void callDisplayOfA() {
            display(); //reference to 'display' is ambiguous is solved by using Virtual Keyword.
        }
};


int main() {

    D d;
    d.callDisplayOfA();
}