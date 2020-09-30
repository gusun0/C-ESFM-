#include <fstream>
#include <iostream>
using namespace std;

int main(){

	int x,y;
	cin >> x >> y;
	
	ofstream fp("nombre.dat");
	fp << x+y << " ";
	fp << x-y << endl;
	fp.close();

	int sum,dif;
	ifstream fr("nombre.dat");
	fr >> sum >> dif;
//	fr >> in;
	fr.close();
	
	cout << sum <<  endl;
	cout << dif << endl;


	return 1;
}
