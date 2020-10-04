#include <cstdio>
#include <iostream>
using namespace std;


void echoSquare(void)
{

	int value;
	cout << "enter a value";
	cin >> value;
	cout << "the square is: " << value*value << "\n";

	return;
}



int main(int nNumberofArgs, char* pszArgs[])
{
	echoSquare();


	return 0;
}
