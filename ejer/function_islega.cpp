#include <iostream>
using namespace std;

bool isLegal(int age, int minAge = 21){

	return age >= minAge;
}

// funcion con parametro por referencia
void multiplyByTwo(int& m){

	m *=2;
}
int main(int nNumberOfArgs, char* pszArgs[]){


	//double legal = isLegal(21);
	//cout << legal;
	
	int n = 1;
	multiplyByTwo(n);
	cout << n;


	return 0;
}
