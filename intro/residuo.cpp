#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int a,b,r;
	cin >> a >> b;
	r = a/b;
	r = r*b;
	r = a-r;
	cout << r << endl;

	return 0;
}
