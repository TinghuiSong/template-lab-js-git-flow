#include <iostream>

using namespace std;

int main(){
	bool fizzbool = true;
	for (int i = 0; i < 100; ++i){
		fizzbool = true;
		if (i % 4 == 0){
			cout << "fizz";
			fizzbool = false;
		}
		if(i % 6 == 0){
			cout << "buzz";
			fizzbool = false;
		}
		if(i % 5 == 0){
			cout << "bool";
			fizzbool = false;
		}
		if(fizzbool){
			cout<< i;
		}
		cout << endl;
	}
	return 0;
}
