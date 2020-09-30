#include <iostream>
using namespace std;

int main(){
	
	int row,col;
	int bandera;
	cin >> row >> col;
	int matriz[100][100];
	


	
	for(int i=0; i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout << "Ingresa numero: ["<<i<<"]["<<j<<"]: ";
			cin >> matriz[i][j];
		
		}
	}

	if(row == col)
	{
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				if(matriz[i][j] != matriz[j][i])
				{
					bandera = 0;
				}
				
			}		
		}
	}	

	if(bandera == 0)
	{
		cout << "no es simetrica" << endl;
       	}
	else 
	{
		cout<< "es simetrica" << endl;
	}

		
	return 0;

}
