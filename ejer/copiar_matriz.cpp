#include <iostream>
using namespace std;

int main()
{
	int matriz[2][2];
	int matriz_copy[2][2];


	for(int i=0; i<2;i++){
		for(int j=0;j<2;j++){
			cout << "ingresa numero: ["<<i<<"]"  "["<<j<<"]: ";
			cin >> matriz[i][j];
		}
	}

	for(int i=0; i<2; i++){
		for(int j=0;j<2;j++){
			matriz_copy[i][j] = matriz[i][j];
			cout << matriz_copy[i][j];
		
		}cout << endl;
	}

	
	return 0;
}
