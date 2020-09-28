#include <iostream>
using namespace std;

int main(){
	float teoria,practica,participacion;
	cin >> teoria >> practica >> participacion;

	teoria =  teoria * 0.6;
	practica = practica * 0.3;
	participacion = participacion *0.1;

	cout << (teoria+practica+participacion)/(0.6+0.3+0.1);






	return 0;
}

