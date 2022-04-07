#include <iostream>
using namespace std;

int main(void)
{

	int hour, min;

	cin >> hour >> min;

	if (min < 45)
	{
		min = 45 - min;
		if (hour == 0)
		{
			hour = 24;
		}
		cout << hour - 1 << " " << 60 - min;
	}
	else
		cout << hour<<" "<<min-45;


	return 0;

}