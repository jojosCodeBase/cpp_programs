// Write a C++ program that set and display the value for private and public member data through the member functions.
#include<iostream>
using namespace std;
class member{
    public:
        int data;
        void setData(int n);
        int getData();
    
    private:
        int prvtData;
};
void member::setData(int n){
    data = n;
    // initializing private member
    prvtData = n;
}
int member::getData(){
    return prvtData;
}
int main(){
    member obj;
    obj.setData(18); 
    cout << "Public data: " << obj.data << endl;  
    // accessing private data through member function
    cout << "Private data: " << obj.getData() << endl;  
    return 0;
}