#include <iostream>
using namespace std;

int readArray(int integerArray[], int maxNumElements);
void displayArray(int integerArray[],int numElements);
int sumArray(int integerArray[], int numElements);

int main(int nNumberOfArgs, char* pszArgs[])
{
	int array[20];
	int numberOfValues = readArray(array,20); 

	displayArray(array,numberOfValues);
	cout << endl;
	cout << sumArray(array,numberOfValues);




	return 0;
}

int readArray(int integerArray[], int maxNumElements)
{
	int numberOfValues;
	for(numberOfValues=0;numberOfValues<maxNumElements;numberOfValues++)	
	{
		int nValue;
		cin >> nValue;
	
		if (nValue < 0)	
		{
			break;
		}
		
		integerArray[numberOfValues] = nValue;	
	
	}

	return numberOfValues;

}

void displayArray(int integerArray[],int numElements)
{
	for(int i = 0; i < numElements; i++){
		
		cout << integerArray[i] << endl;
	}	

}

int sumArray(int integerArray[], int numElements)
{	
	int sumArray = 0;
	for(int i=0;i<numElements;i++)
	{
		sumArray += integerArray[i];
	
	}
	return sumArray;

}
