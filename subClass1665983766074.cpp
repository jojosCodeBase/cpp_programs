// Write a C++ program that having a member data as the protected type and the derived class has two functions that can access the member data of parent class.
#include<iostream>
using namespace std;
class Box{
    protected:
        double width;
};
class SmallBox:Box{ // derived/sub class of class 'Box'
    public:
        void setSmallWidth(double wid);
        double getSmallWidth();
};

// Member functions of child class
void SmallBox::setSmallWidth(double wid){
    width = wid;
}
double SmallBox::getSmallWidth(){
    return width;
}
int main(){
    SmallBox obj;
    obj.setSmallWidth(22.5);
    cout << "Width of box: " << obj.getSmallWidth();   
    return 0;
}