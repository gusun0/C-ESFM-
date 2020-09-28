#include <iostream>
using namespace std;
int main(){

	int num,total;
	total = 0;
	do{
		cin >> num;
		if(num >=1 ){
			total +=num;			
		}

	
	}while( ((num < 20) || (num >30)) && num != 0);
	cout << total << endl;


	return 0;
}
