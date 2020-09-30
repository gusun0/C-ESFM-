#include <fstream>
#include <iostream>
using namespace std;

int main(void){
	int size;
	
	cin >> size;
	cout << size;

	ofstream myReport("reporte.txt");
	myReport << " ***************************** INICIO" << endl;
	myReport << "Vector de " << size << " componentes" << endl;
	myReport << " ***************************** FIN" << endl;
	myReport.close();

	int re,i=0;
	ifstream fr("reporte.txt");

	while(i != '\0'){
		fr >> re;
		fr.close();
	
	}
/						/	fr.close();

	cout << re << endl;



	return 0;
}
