#include <iostream>
using namespace std;

int main(){

	int fib,aux;
       	long long int num;
	fib = 0, aux = 1;
	cin >> num;
	for(int i=1; i<=num; i++){

		cout << fib << endl;

		aux = aux +  fib;
		fib = aux - fib;
			
	
	}
	
	return 0;
}	
