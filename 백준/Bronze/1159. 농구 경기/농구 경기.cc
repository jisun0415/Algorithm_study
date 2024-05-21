#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int cnt[150] = {0};
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		cnt[str[0] - 'a']++;
	}

	vector<char> v;
	int plag = 0;
	for (int i = 0; i < 26; i++)
	{
		if (cnt[i] >= 5) {
			v.push_back('a' + i);
			plag = 1;
		}
	}

	sort(v.begin(), v.end());
	
	if (plag == 0)
	{
		cout << "PREDAJA";
	}
	else
	{
		for (int i = 0; i < v.size(); i++)
			cout << v[i];
	}
	return 0;
}
