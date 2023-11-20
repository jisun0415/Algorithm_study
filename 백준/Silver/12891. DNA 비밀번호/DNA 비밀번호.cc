#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n,m;
	cin >> n >> m;

	string str;
	cin >> str;

	int a, c, g, t;
	cin >> a >> c >> g >> t;

	//첫번째길이 일단 체크
	int cnta = 0, cntc = 0, cntg = 0, cntt = 0;
	for (int i = 0; i < m; i++)
	{
		if (str[i] == 'A')
			cnta++;
		if (str[i] == 'C')
			cntc++;
		if (str[i] == 'G')
			cntg++;
		if (str[i] == 'T')
			cntt++;
	}

	int result = 0;


	if (cnta >= a&& cntc >= c && cntg >= g && cntt >= t)
	{
		result++;
	}

	for (int i = 1; i <= n-m ; i++)
	{
		if (str[i-1] == 'A')
			cnta--;
		if (str[i-1] == 'C')
			cntc--;
		if (str[i-1] == 'G')
			cntg--;
		if (str[i-1] == 'T')
			cntt--;


		if (str[i + m-1] == 'A')
			cnta++;
		if (str[i + m-1] == 'C')
			cntc++;
		if (str[i + m-1] == 'G')
			cntg++;
		if (str[i + m-1] == 'T')
			cntt++;

		//cout << cnta << cntc << cntg << cntt << "\n";
		if (cnta >= a && cntc >= c && cntg >= g && cntt >= t)
		{
			result++;
		}

	}

	cout << result << "\n";

}