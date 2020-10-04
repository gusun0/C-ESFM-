#include <iostream> 
using namespace std;
 
void intercambiar(int &i, int &j);

int main(void)
{
	int a,b;
	a = 2; b =3;

	cout << a << " " << b << endl;
	intercambiar(a,b);
	cout << a << " " << b << endl;

		
		
	return 0;	
}

void intercambiar(int &i, int &j)
{
	int z;
	z = i;
	i = j;
	j = z;
}




















