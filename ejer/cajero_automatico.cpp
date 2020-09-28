#include <iostream>
using namespace std;

int main(){
	int opc;
	float saldo, saldoT;
	saldo=1000;
	cout << "Elige una opción" << endl;
	cout << "1. Ingresar dinero a la cuenta" << endl;
	cout << "2. Retirar saldo de la cueta" << endl;
	cout << "3. Salir" << endl;
	cin >> opc;

	switch(opc){
		case 1:
			cout << "ingresa cantidad:" << endl;
			cin >> saldoT;
			saldo += saldoT;
			cout << "Saldo total es: " << saldo << endl;
			break;
		case 2: 
			cout << "Ingrese cantidad a retirar: " << endl;
			cin >> saldoT;
			if (saldoT >=0 && saldoT <=1000){
				saldo -=saldoT;
				cout << "Retiraste: " << saldo << endl;		
				cout << "Tu saldo actual es: " << saldo << endl;
			}else{
				cout << "No dispones de ese saldo " <endl;				
			}			
			break;
		case 3:
			break;
		
	}


	return 0;
}
