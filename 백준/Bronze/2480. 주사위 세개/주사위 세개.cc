#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c, max = -99;
	cin >> a >> b >> c;

	if (a == b &&b== c)
		cout << 10000 + a * 1000;
	else if (a == b&&b!=c||b==c&&c!=a||c==a&&a!=b)
	{
		if (a == b)
			cout << 1000 + a * 100;
		else if (b == c)
			cout << 1000+ b * 100;
		else
			cout << 1000 + c * 100;
	}
	else
	{
		if (a > b &&b> c || a > c&&c > b)
			cout << a * 100;
		else if (b > c &&c> a || b > a&&a > c)
			cout << b * 100;
		else
			cout << c * 100;
	}
	return 0;

}