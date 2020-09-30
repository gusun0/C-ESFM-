//#include <cstdio>
//#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[]){
	int nArg1;
	cin >> nArg1;

	int nArg2;
	cin >> nArg2;

	if (nArg1 > nArg2){
		cout << "argument 1 is greater that argument 2" << endl;
	}else{
		cout << "argument 2 is greater than argument 1" << endl;
	
	}

	cout << "press enter to continue ..." << endl;
	cin.ignore(11, '\n');
	cin.get();
	

	return 0;
}
