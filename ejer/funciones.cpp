#include <iostream>
using namespace std;

void someFunction(void){

	return;
}

int someFunction(int var){

	return var;
}

double someFunction(double var) {

	return var;
}

int someFunction(int var1,int var2){
	
	return var1+var2;
}

int main(int nNumberofArgs, char* pszArgs[])
{
	someFunction(1);
	int a = someFunction(2.2,4);
	int b = someFunction(4);
	cout << a << b;
	
	

	return 0;
}
