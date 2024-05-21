#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	string s;

	getline(cin, s);

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 65 && s[i] < 97) {
			if (s[i] + 13 > 90) s[i] = s[i] + 13 - 26;
			else s[i] = s[i] + 13;
		}
		else if (s[i] >= 97 && s[i] < 123) {
			if (s[i] + 13 > 122) s[i] = s[i] + 13 - 26;
			else s[i] = s[i] + 13;
		}
	}

	for (int i = 0; i < s.size(); i++)
		cout << s[i];

}