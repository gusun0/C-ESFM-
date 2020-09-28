#include <iostream>
#include <math.h>
using namespace std;

int main(){

	int i, num, total;
	i=1,total=0;

	cin >> num;

	while(i <=num){
		total += pow(2,i);	
		i++;
	}
	cout << total << endl;

	return 0;
}
