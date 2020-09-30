#include <fstream>
#include <iostream>
using namespace std;
int main(void)
{
	int outval=3;
	ofstream WriteFile("myfile.txt");
	WriteFile << outval;
	WriteFile.close();

	int inval;
	
	ifstream ReadFile("myfile.txt");
	ReadFile >> inval;
	ReadFile.close();
	
	cout << outval;


	return 1;
}	
