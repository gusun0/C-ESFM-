#include <iostream>
using namespace std;

void concatenate(char str1[],char str2[]);

int main(int nNumberOfArgs, char* pszArgs[])
{
	char name[]="oscar";
	char name2[]="pedro";

	concatenate(name,name2);

	


	return 0;
}


void concatenate(char str1[],char str2[])
{
	for(int i=0;str1[i] != '\0';i++)
	{
		cout << str1[i];
	}
	cout << "-";

	for(int i=0;str2[i] != '\0';i++)
	{
		cout << str2[i];
	
	}
}
