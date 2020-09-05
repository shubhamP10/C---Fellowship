#include <iostream>

using namespace std;

template <typename T>

class Addition {
    public:
        T firstNum, secondNum;

        Addition(T first, T second) {
            this->firstNum = first;
            this->secondNum = second;
        }

        T add() {
            return (firstNum + secondNum);
        }
};

class Number {
    public:
        int value;

        Number(){}

        Number(int a) {
            value = a;
        }

        Number operator+ (Number& anotherNum) {
            int sum = this->value + anotherNum.value;
            Number addedNum(sum);
            return addedNum;
        }
};

int main() {

    // Addition<double> addition(15.5, 250.8);
    // cout << "Sum = " << addition.add() << endl;

    Number num1(25), num2(30);

    Addition<Number> add(num1.value, num2.value);
    Number addedNum = add.add();
    cout << "Class Type Sum = " << addedNum.value;

    return 0;
}