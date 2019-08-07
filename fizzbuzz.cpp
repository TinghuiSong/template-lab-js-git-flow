#include <iostream>

using namespace std;

void fizzbuzz( int maxVal){
	for (int i = 0; i <= maxVal; ++i){
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
}
int main(){
	fizzbuzz(100)	
	return 0;
}
