#include<iostream>

using namespace std;

class Employee {
    string name;

    public:
        int salary;
        void setName(string name);
        string getName(void);

    protected:
        int age;

};

void Employee::setName(string name) {
    this->name = name;
}

string Employee::getName(void) {
    return this->name;
}

class SetEmp : Employee {
    public:
        void setEmpAge(int empAge) {
            age = empAge;
        }

        int getEmpAge() {
            return age;
        }
};

int main() {

    Employee emp;
    emp.setName("Shubham");
    emp.salary = 10000;
    
    SetEmp setEmp;
    setEmp.setEmpAge(25);

    cout << "Employee1 Name: " << emp.getName() << endl;
    cout << "Salary: " << emp.salary << endl;
    cout << "Age: " << setEmp.getEmpAge() << endl;
   
    return 0;
}