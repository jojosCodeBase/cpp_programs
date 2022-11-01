#include<iostream>
using namespace std;
int main(){
    int x = 500;
    {
        cout << x << endl;
        int x = 400;
        {
            cout << x << endl;
            int x = 200;
            {
                cout << x << endl;
            }
        }
        cout << x << endl;
    }
    return 0;
}