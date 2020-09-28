#include <iostream>
using namespace std;

int main()
{
	char x;
	cin >> x;

	switch(x) {

		case 'a': cout << "digitaste la vocal minuscula: " << x << endl; break;
		case 'e': cout << "digitaste la vocal minuscula: " << x << endl; break;
		case 'i': cout << "digitaste la vocal minuscula: " << x << endl; break;
		case 'o': cout << "digitaste la vocal minuscula: " << x << endl; break; 
		case 'u': cout << "digitaste la vocal minuscula: " << x << endl; break;
		default: cout << "digitaste una vocal no minuscula" << endl;  break;

	}

//if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x =='u'){
//		cout << "digitaste un vocal minuscula";
//
//	}else{
//		cout << "digitaste una vocal mayusucula";	
//	}

	return 0;
}

