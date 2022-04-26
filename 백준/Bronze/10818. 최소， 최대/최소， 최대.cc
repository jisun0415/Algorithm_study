#include <iostream>
using namespace std;


int main()
{
	int n, m, max = -99999999, min = 99999999;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		if (m < min)
		{
			min = m;
		}
		if (m > max)
		{

			max = m;
		}

	}
	if (n == 0)
	{
		cout << "0 0";
	}
	cout << min << " " << max;
	return 0;
}