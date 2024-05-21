#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

//구간합은 입력받을 때 미리 구간합 계산해놓는거임 
int main()
{
	int a, b;
	cin >> a >> b;
	int S[100001]; //구간합 배열
	for (int i = 1; i <= a; i++)
	{
		int N;
		cin >> N;
		S[i] = S[i - 1] + N;
	}

	int result = -9999999;
	for (int i = b; i <= a; i++)
	{
		result = max(result, S[i] - S[i - b]);
	}

	cout << result;
	

}
