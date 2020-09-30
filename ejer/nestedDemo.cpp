// NESTED DEMO
// INPUT A SERIES OF NUMBERS
// CONTINUE TO ACCUMULATE THE SUM OF THESE NUMBERS UNTIL THE USER
// ENTERS A 0. REPEAT THE PROCCESS UNTIL THE SUM IS 0.


#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
	cout << "this program sums multiple series\n"
		<< "of numbers. terminate each sequence\n"
		<< "by entering a negative number\n"
		<< "terminate the series by entering two\n"
		<< "negative numbers in a row\n"
		<< endl;	

	int acumulator;

	for(;;){

		acumulator = 0;
		for(;;)
		{
			int nValue;
			cin >> nValue;

			if (nValue < 0 ){
				break;
			}
		
			acumulator += nValue;	
		}

		if( acumulator == 0){
			break;			
		}	
	
		cout << acumulator << endl;

	}


	


	return 0;
}



