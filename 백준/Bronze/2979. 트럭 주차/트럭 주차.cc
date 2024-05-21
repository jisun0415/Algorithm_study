#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int cnt[100] = {0};

	for (int i = 0; i < 3; i++)
	{
		int start, end;
		cin >> start >> end;
		for (int j = start; j < end; j++) cnt[j]++;
	}
	int sum = 0;
	for (int i = 0; i < 100; i++)
	{
		if (cnt[i] == 1) sum += (cnt[i] * a);
		else if (cnt[i] == 2) sum += (cnt[i] * b);
		else if (cnt[i] == 3) sum += (cnt[i] * c);
	}
	cout << sum;
	return 0;
}

