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
};

class B {
    private:
        int number2;
    
    public:
        void showNumberOfA(A &num){
            cout << "A::Number1 = " << num.number1;
        }
};

int main(){
    A a;
    B b;
    b.showNumberOfA(a);
}