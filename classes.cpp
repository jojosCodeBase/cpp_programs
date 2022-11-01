// Write a c++ program for an employee class that has a member data and a member function
#include<iostream>
using namespace std;
class Employee{
    int salary;     // data member
    public:
        void sal(){     // member function
            cout << "Enter salary: ";
            cin >> salary;
        }
        void display();
};
void Employee :: display(){
    cout << "Salary = " << salary;
}
int main(){
    Employee obj;
    obj.sal();
    obj.display();
    return 0;
}