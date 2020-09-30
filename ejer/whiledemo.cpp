#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int nNumberofArgs,char* pszArgs[]){

	// input the loop count
	
	int nLoopCount;
	cin >> nLoopCount;

	while(nLoopCount-- > 0){
			
		cout << nLoopCount << endl;
	
	}
	

		
		




	cout << "press enter to continue ..." << endl;
	cin.ignore(10, '\n');
	cin.get();

	return 0;
}

