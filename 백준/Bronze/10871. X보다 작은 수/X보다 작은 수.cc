#include <iostream>
using namespace std;

int main()
{
	int n, m, x[10000];

	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (x[i] < m)
			cout << x[i]<<" ";
	}
return 0;
}