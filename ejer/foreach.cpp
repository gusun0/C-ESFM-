#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int nNumberOfArgs, char* pszArgs[]){

	cout << "the primes less than 20 are:" <<endl;

	for(int n: {1,2,3,5,7,11,13,17,19}){
	
		cout << n << endl;
	}



	return 0;
}
