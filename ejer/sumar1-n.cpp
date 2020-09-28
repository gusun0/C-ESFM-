#include <iostream>
using namespace std;

int main(){
	
	int i, num, total;
	total = 0;
	i = 1;
	cin >> num;

	while(i <= num){

		total +=i;
		i++;	
	}

	cout << total << endl;
	return 0;
}


