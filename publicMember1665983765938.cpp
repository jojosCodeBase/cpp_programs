// program to set and display the value of public member data through the member functions
#include<iostream>
using namespace std;
class Member{
    public:
        int data;
        void setData(int n);
        int getData();
};
void Member::setData(int n){
    data = n;
}
int Member::getData(){
    return data;
}
int main(){
    Member obj;
    obj.setData(18);
    cout << "Data = " << obj.getData() << endl;
    // modifying data
    obj.data = 25;
    cout << "\nAfter modifying\n\nData = " << obj.data << endl;
    return 0;
}