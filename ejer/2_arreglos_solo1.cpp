#include <iostream>
using namespace std;
int main()
{	
	char letra1[] = "abcde";
	char letra2[] = "fghij";
	char letra3[10];
	int i=0,j=5;

	do{
		letra3[i]=letra1[i];
		i++;

	}while(letra1[i] !='\0');

	

	do{
		letra3[j]=letra2[j-5];	
		j++;
	}while(letra2[j]!='\0');


	for(int i=0; i<10; i++){
		cout <<letra3[i];
		
	}
	
	
	return 0;
}

