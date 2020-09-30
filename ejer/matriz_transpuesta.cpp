#include <iostream>
using namespace std;
int main(){	

	int matriz[3][3];
	int matriz2[3][3];


	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << "Ingresa numero [" <<i<<"]["<<j<<"]: ";
			cin >> matriz[i][j];
			
		
		}
	}

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			matriz2[j][i] = matriz[i][j];
		}
	}

	cout << "MATRIZ NORMAL"	<< endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << matriz[i][j];
		}cout << endl;
	}
	
	
        cout <<	"MATRIZ TRANSPUESTA" << endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << matriz2[i][j];
		}cout << endl;
	}

	return 0;
}
