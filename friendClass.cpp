// write a program to display the value of private data member of one class by its friend class 
#include<iostream>
using namespace std;
class A{
    private:
        int a;
    public:
        void function1(){
            a = 10;
        }
        friend class B; // friend class
};

class B{
    private:
        int b;
    public:
        void showFunction(A&x){
            // B can access private 
            cout << "Value of a = " << x.a;
        }
};

int main(){
    A a;
    B b;
    a.function1();
    b.showFunction(a);    
    return 0;
}