#include<iostream>
using namespace std;

class Distance{
    int feet, inches;
    public:
        Distance(){
            feet = 0;
            inches = 0;
        }
        Distance(int f, int i){
            feet = f;
            inches = i;
        }

        void display(){
            cout << "Feet : " << feet << " Inches: " << inches << endl;
        }

        // overloading minus(-) operator
        Distance operator-(){
            feet = -feet;
            inches = -inches;
            return Distance(feet, inches);
        }
};

int main(){
    Distance D1(5, 6);
    Distance D2(-3, 11);

    D1.display();
    -D1;
    D1.display();
    D2.display();
    -D2;
    D2.display();
    return 0;
}