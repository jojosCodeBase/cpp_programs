#include<iostream>
using namespace std;

class Box{
    double length, breadth, height;

    public:
        Box(double l, double b, double h){
            length = l;
            breadth = b;
            height = h;
        }

        double volume(){
            return length * breadth * height;
        }

        int compare(Box obj){
            return this -> volume() > obj.volume();
        }
};
int main(){
    Box obj(5.8, 5.2, 4.5);
    Box obj1(5.5, 2.5, 3.5);

    if(obj.compare(obj1))
        cout << "\nBox2 is smaller than Box1" << endl;
    else
        cout << "\nBox1 is smaller than Box2" << endl;
    return 0;
}