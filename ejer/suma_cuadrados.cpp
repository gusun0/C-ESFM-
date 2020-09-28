#include <iostream>
using namespace std;
int main()
{	
	int i, num, total;
	i=1;
	num=0;
	total=0;
	while(i<=10){
		num = i*i;
		total += num;
		cout << num << endl;
		i++;
	}

	cout << total << endl;

	return 0;
}

