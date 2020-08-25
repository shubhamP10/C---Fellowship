#include <iostream>

using namespace std;

class A {
    public:
        A() {
           cout << "Called A()\n";
        }

        A(int a){
            cout << "A = " << a << endl;
        }

        void display() {
            cout << "Display of A Called\n";
        }
};

class B : virtual public A {
    public:
        B() {
            cout << "calling B()\n";
            // A();
        }

        void display() {
            cout << "Display of B\n";
        }
        // void callDisplay() {
        //     cout << "Class B Calling Display of A\n";
        //     display();
        // }
};

class C : virtual public A {
    public:
        C() {
            cout << "Calling C()\n";
            // A();
        }

        void display() {
            cout << "Display of C\n";
        }
        // void callDisplay() {
        //     cout << "Class C Calling Display of A\n";
        //     display();
        // }
};

class D : public B, public C {
    public:
         D() : A(5) {
            cout << "Class D Constructor\n";
        }

        // void callDisplayOfA() {
        //     display(); //reference to 'display' is ambiguous is solved by using Virtual Keyword.
        // }
};


int main() {

    D d;

    d.C::display();
}