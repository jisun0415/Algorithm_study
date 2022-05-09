#include <iostream>
using namespace std;


int main()
{
	int n;
	char str[100];

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> str[i];
	}
	int sum = 0;
	int j;
	for (int i = 0; i < n; i++)
	{

		sum += str[i]-'0';
	}
	cout << sum;


	

}