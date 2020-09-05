#include <iostream>

using namespace std;

class Variable {
    public:
        const int a = 100;
        mutable int b;
        Variable() : a(0) {
            cout << "A = " << a << endl;
        }
        Variable(int newA, int newB) : a(newA), b(newB) {
            // a = newA;
            // b = newB;
        }

        void changeB(int newB) {
            b = newB;
        }
};

int main() {
    Variable variable1;
    const Variable variable(10, 20);
    std::cout << "(a, b) = (" << variable.a << ", " << variable.b << ")" << endl; 
    // variable.changeB(30);
    variable.b = 30;
    std::cout << "New b = " << variable.b << endl;
    return 0;
}