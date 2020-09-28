#include <iostream>
using namespace std;

int main(){
	
	int i, total, num;
	i=1,total=1;
	cin >> num;
	if ((num == 0 || num == 1)){
		cout << "1" << endl;
	}else{
		while(i<=num){
			total *= i;	
			i++;
              	}
		cout << total << endl;
	}

	return 0;
}
