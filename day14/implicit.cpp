#include <iostream>

using namespace std;

class A {
   int num = 25;
    public:
        int getNum() {
            return (num);
        }

        void display() {
            cout << "A Num = " << num << endl;
        }
};

class B {
    int bNum;
    public:
        void operator = (A &a) {
            bNum = a.getNum();
        }

        void display() {
            cout << "B Num = " << bNum << endl;
        }
};

int main() {
    A a;
    B b;
    b = a;
    a.display();
    b.display();
}