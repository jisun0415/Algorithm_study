#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;


int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
int visited[25][25] = {0};
int map[25][25] = {0};
vector<int> ans;
int danzi = 0;
int n;

void dfs(int x, int y) {
	visited[x][y] = 1;
	danzi++;

	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (visited[nx][ny] == 0 && map[nx][ny] == 1&&nx>=0&&nx<n&&ny>=0&&ny<n)
		{
			dfs(nx, ny);
		}
	}

}

int main()
{
	
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;

		for (int j = 0; j < n; j++)
		{
			map[i][j] = s[j] - '0';
		}
	}

	int cnt = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (map[i][j] == 1 && visited[i][j] == 0)
			{
				dfs(i, j);
				cnt++;
				ans.push_back(danzi);
				danzi = 0;

			}
		}
	}

	sort(ans.begin(), ans.end());

	cout << cnt << "\n";
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << "\n";

}
