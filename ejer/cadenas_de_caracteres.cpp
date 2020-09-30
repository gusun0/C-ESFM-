#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
	
	char palabra[] = "Rafael";
	char palabra2[] = {'R','a','f','a','e','l'};
	char nombre[30];

	cout << "digite su nombre";
	fgets(nombre,200,stdin);

	cout << nombre << endl;

	return 0;
}
