#include <iostream>
using namespace std;
int main(){

	int array[]= {1,2,3,4,5};
	int i=0,sum;
	sum = 0;
	while(i < 5){
		cout << array[i] << endl;
		sum += array[i];
		i++;
	
	
	}

	cout << sum << endl;



	return 0;
}
