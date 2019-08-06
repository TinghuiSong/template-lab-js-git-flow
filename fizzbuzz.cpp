#include <iostream>

using namespace std;

int main(){
	for (int i = 0; i < 101; ++i){
		if ( i%4 == 0 && i%6 == 0){
			cout << "fizzbuzz ";
		}
		else if ( i%4 == 0 ){
			cout << "fizz ";
		}
		else if ( i%6 == 0 ){
			cout << "buzz ";
		}
		else{
			cout << i << " ";
		}
	}
	return 0;
}
