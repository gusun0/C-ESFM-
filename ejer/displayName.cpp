#include <iostream>
using namespace std;

void displayMyName(char arrayName[]);

int main(int nNumberOfArgs, char* pszArgs[])
{
	char array[]="carlos";
//:	cin >> array;
	displayMyName(array);
	



	return 0;
}


void displayMyName(char arrayName[])
{	
	for(int i=0; arrayName[i] != '\0';i++)
	{
		cout << arrayName[i];	
	}	
}
