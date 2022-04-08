#include <iostream>
using namespace std;

int main(void)
{
	int hour, min;
	cin >> hour >> min;
	int cook;
	cin >> cook;

	min += cook;
	if (min > 59)
	{
		hour += min /60;
		min %= 60;
	}
	hour %=24;

	cout << hour << " " << min;
	return 0;
}