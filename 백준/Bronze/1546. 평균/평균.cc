#include <iostream>
using namespace std;


int main()
{
	
	int n, ele,x[1000];
	double max = -9999;
	double result = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
		if (max < x[i])
			max = x[i];
		result += x[i];
	}
	result = (result / max * 100) / n;

	cout << fixed;
	cout.precision(6);
	cout << result << '\n';
	

}