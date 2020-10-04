#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

void displayExplanation(void)
{
	cout << "this program sums multiple serines\n"
		<< "of numbers. terminate each sequence\n"
		<< "by entering a negative  number\n"
		<< "terminate the series by entering an\n"
		<< "empty sequence\n"
		<< endl;
	return;
}


int sumSequence(void){
	
		int acumulator = 0;
		for(;;)
		{
			int nValue;
			cin >> nValue;

			if (nValue < 0){
				break;
			}

			acumulator += nValue;		
		}

	return acumulator;

}

int main(int nNumberOfArgs, char* pszArgs[]){

	displayExplanation();

	
	for(;;)
	{
		int acumulatorValue=sumSequence();	

		if(acumulatorValue == 0)
		{
			break;
		}		
		cout << acumulatorValue << endl;
	}

		


	return 0;
}

