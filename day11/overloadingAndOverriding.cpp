#include <iostream>

using namespace std;

class Sum {
    int a, b;

    public:
        Sum() {
            a = 10;
            b = 20;
        }

        int add() {
            return a + b;
        }

        int add(int p, int q) {
            return p + q;
        }

        float add(float p, float q) {
            return p + q;
        }
};

class ArithmeticOperations : public Sum {
    int a, b;

    public:
        ArithmeticOperations() {
            a = 25;
            b = 30;
        }  

        //Overriding add()
        int add() {
            cout << "\nParent add(): " << Sum::add() << endl;
            return a + b;
            
        }
};

int main() {

    Sum sum;
    cout << "Method Overloading Example:\n";
    cout << "Calling add() with no Parameters:\n Sum = " << sum.add() << endl;
    cout << "Calling add() with 100 & 150:\n Sum = " << sum.add(100, 150) << endl;
    cout << "Calling add() with 100.0 & 150.5:\n Sum = " << sum.add(100.0f, 150.5f) << endl;

    ArithmeticOperations ao;
    cout << "\nOverriding add()\n Sum = " << ao.add() << endl;
}