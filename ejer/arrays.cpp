#include <iostream>
using namespace std;


int main(int nNumberofArgs, char* pszArgs[]){
	
	int nValue;
	int nValueArray[128];
	
	for(int i=0;i<128;i++)
	{
		cin >> nValue;

		if (nValue <0)
		{
			break;
		}

		nValueArray[i] = nValue;				
	
	
	}

	cout << nValueArray[i];

	





	return 0;
}
