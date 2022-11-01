#include<iostream>
using namespace std;
int main(){
	int var  = 5;
	int *ptr = &var;
	
	// display value of varaible
	cout << "var = " << var << endl;
	
	// display address of var
	cout << "Address of var = " << ptr << endl;
	
	// changing value of var directly
	var = 7;
	
	// display value of varaible
	cout << "var after changing normally = " << var << endl;
	
	
	// changing the value of variable through pointer
	*ptr = 10;	
	
	// checking if value os changed or not
	cout << "var after changing through pointer = " << var << endl;
	
	// adddress of var
	cout << "Address of var = " << ptr << endl;
	return 0;
}
