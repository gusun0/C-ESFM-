#include <iostream>
using namespace std;

void mensaje();
int someFunction(double,int);
int main(int nNumberofArgs, char* pszArgs[])
{
//	mensaje();
	int a = someFunction(4.0,5);
	cout << a;


	return 0;
}

int someFunction(double var1,int var2){
	return var1*var2;
	
}
void mensaje(void){
	
	cout << "Hola\n" << endl;
	return;

}
