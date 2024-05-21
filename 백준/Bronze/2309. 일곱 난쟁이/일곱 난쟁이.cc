#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
//시간 복잡도
/*

어떤 알고리즘이 실행되는데 걸리는 시간
빅오표기법 - 복잡도에 가장 영향을 많이 끼치는 향의 상수인자를 빼고 나머지 항을 없애서 복잡도를 나타내는 표기법
만약  10*n^2+n이라면 빅오표기법으로 표기하면 n^2

*/

//일곱난쟁이
int n[9];

void combi(int start, vector<int> &v)
{
	if (v.size() == 7)
	{
		int sum = 0;
		for (int i = 0; i < 7; i++)
		{
			sum += v[i];
		}
		if (sum == 100)
		{
			for (int i = 0; i < 7; i++)
				cout << v[i] << "\n";
			exit(0);
		}
	}
	for (int i = start + 1; i < 9; i++)
	{
		v.push_back(n[i]);
		combi(i, v);
		v.pop_back();
	}
	return;
}
int main() {
	
	for (int i = 0; i < 9; i++)
		cin >> n[i];
	sort(n, n+9);

	vector<int> v;
	combi(-1, v);
	return 0;


}

