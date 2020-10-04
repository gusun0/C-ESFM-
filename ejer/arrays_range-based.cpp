#include <iostream>
using namespace std;

int main(int nNumberOfArgs, char* pszArgs[])
{

	int matrix[2][3]= {{1,2,3},{4,5,6}}; 

	for(int i =0; i<2;i++){
	
		cout << matrix[i][i];
	}




//	int nArray[128];
	
//	for(int &n: nArray)
//	{
//		n = 0;
//	}
//	
//	for(int i =0; i<128; i++){
//	
//		cout << nArray[i];
//	}
//
	return 0;

}
