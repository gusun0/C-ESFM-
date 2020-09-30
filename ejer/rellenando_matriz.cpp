#include <iostream>
#include <ctime>
using namespace std;
int main(){
	
	srand((int)time(0));
	
	int row,col,f,c;
	cin >> row >> col;

	int matriz[row][col];
	
	for(f=0;f<row;f++){
		for(c=0;c<col;c++){
			 matriz[f][c] = rand()%10+1;
		}
	
	}


	for(f=0;f<row;f++){
		for(c=0;c<col;c++){
			cout <<  matriz[f][c] << ",";
		}cout << endl;
	}

	return 0;
}
		
																		
