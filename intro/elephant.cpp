#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int aux,num,div,mod,total;
	
	cin >> num;

	div = num/5;

	mod = num%5;
	


	if(mod == 0){
	
	total = div;
	cout << total;

	}

	else{
	
	aux = mod/mod;		
	total = div + aux;
	cout << total; 	

	}


	return 0;
}

