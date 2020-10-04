#include <iostream>
using namespace std;

void concatString(char szTarget[], const char szSource[]);

int main(int nNumberOfArgs, char* pszArgs[])
{
	char szString1[256];
	cout << "enter first string" << endl;
	cin.getline(szString1,128);
	//cout << szString1 << endl;

	concatString(szString1, "-");
	cout << szString1;
	

	return 0;
}


void concatString(char szTarget[], const char szSource[])
{
	int targetIndex = 0;
	while(szTarget[targetIndex])	
	{
	//	cout << szTarget[targetIndex];
//		cout << targetIndex;		
		targetIndex++;


	} cout << targetIndex;
	int sourceIndex = 0;
	while(szSource[sourceIndex])
	{
		szTarget[targetIndex] = szSource[sourceIndex];
		targetIndex++;
		sourceIndex++;
	}

	szTarget[targetIndex] = '\0';
}
