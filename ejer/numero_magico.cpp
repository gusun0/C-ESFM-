#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand((int)time(0));
	int num,n,cont;
	cont = 0;
	cin >> num;
	if(num >= 1 && num <= 100){
		do{

			n=rand()%100+1;
			if(num > n){
				cout << "el numero que ingresaste es mayor" << endl;
			}else{
				cout << "el numero que ingresaste es menor" << endl;
			}
			cont +=1;


			cout << n << endl;	
		}while(num != n);
	}
	cout << "se tardo: " << cont << " veces" << endl;
		
	return 0;
}
