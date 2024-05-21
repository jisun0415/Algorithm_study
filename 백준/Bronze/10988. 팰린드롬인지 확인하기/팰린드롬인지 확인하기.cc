#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string str;
	cin >> str;
	string str2=str;

	reverse(str2.begin(), str2.end());

	if (str.compare(str2) == 0) //두 문자열을 비교했을 때 같으면 결과가 0임 
		cout << 1;
	else
		cout << 0;
}
