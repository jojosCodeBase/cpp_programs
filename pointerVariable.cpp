#include<iostream>
using namespace std;
int main(){
	int var = 5;
	int *ptr;
	
	ptr = &var;
	// normal access of value
	cout << "Value of var = " << var << endl;
	
	// address of variable
	cout << "Address of var (&var) = " << &var << endl;
	
	// value of pointer i.e. the address of var
	cout << "Value of ptr = " << ptr << endl;
	
	// accessing value of var through pointer
	cout << "Value of var through ptr = " << *ptr << endl; 
	return 0;	
}
