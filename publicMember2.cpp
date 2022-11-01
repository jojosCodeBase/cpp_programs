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
    int x;
    
    return 0;
}