#include <iostream>
using namespace std;

int main(){

	int mayor,num;
	
	cin >> num;
	int n[num];
	mayor = n[0];

	for(int i =0; i<num; i++){
		cin >> n[i];

		if(n[i] > mayor){
			mayor = n[i];
		
		}
	}

	cout << mayor << endl;

 
	

	return 0;
}
