#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(){


	int acumulador=0;
	
	// loop forever
	for(;;)
	{
		int nValue=0;
		cin >> nValue;

		if (nValue ==0){
			continue;
		}

		acumulador +=1;
	
	}
	cout << acumulador;




	return 0;
}
