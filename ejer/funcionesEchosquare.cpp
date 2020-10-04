#include<iostream>
using namespace std;

double square(double doubleVar)
{
	return doubleVar*doubleVar;

}

void displayExplanation(void)
{
	cout << "this program sums the square of multiple\n"
		<< "series of numbers. Terminate each sequece\n"
		<< "by entering a negative number. \n"
		<< "Terminate the series by entering an\n"
		<< "empty sequence- \n"
		<< endl;
	return;

}


double sumSquareSequence(void)
{
	double acumulator = 0;
	for(;;)	
	{
		double nValue;
		cin >> nValue;

		if (nValue <0){
			break;
		}

		double value = square(nValue);
		acumulator +=value;
	
	}
	return acumulator;
}


int main(int nNumberofArgs, char* pszArgs[]){

	displayExplanation();

	for(;;)	
	{
		double acumulatorValue = sumSquareSequence();
		
		if(acumulatorValue == 0){
			break;			
		}

		cout << acumulatorValue << end;	
	}

	return 0;
}
