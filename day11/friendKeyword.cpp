#include<iostream>

using namespace std;

class A {
    private:
        int number1;
    
    public:
        A() {
            number1 = 100;
        }

        friend class B;
        friend void showNumOfA(A&);
};

class B {
    public:
        void showNumberOfA(A &num) {
            cout << "Using Friend Class\n";
            cout << "A::Number1 = " << num.number1 << endl;
        }
};

void showNumOfA(A& a) {
    cout << "\nUsing Friend Function\n";
    cout << "A::Number1 = " << a.number1 << endl;
}

int main() {

    A a;
    B b;
    b.showNumberOfA(a);

    showNumOfA(a);
}