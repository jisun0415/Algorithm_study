#include <iostream>
#include <queue>
#include <vector>
#define MAX 101
#include <algorithm>

using namespace std;

int map[MAX][MAX];
int visited[MAX][MAX];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
vector<int> n;
int N;
void bfs(int x, int y)
{
    visited[x][y] = 1;
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));
    int cnt = 1;

    while (!q.empty())
    {
        int front_x = q.front().first;
        int front_y = q.front().second;

        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int next_x = front_x + dx[i];
            int next_y = front_y + dy[i];

            
            if (next_x >= 0 && next_x < N && next_y >= 0 && next_y < N && !visited[next_x][next_y] && map[next_x][next_y] == 1)
            {
                q.push(make_pair(next_x, next_y));
                visited[next_x][next_y] = 1;
                cnt++;
            }
        }
    }

    n.push_back(cnt);
}

int main()
{
    
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < N; j++)
        {
            map[i][j] = s[j] - '0';
        }
    }

   for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
                {
                    if(!visited[i][j] && map[i][j]==1)
                        bfs(i,j);
                }
        }

    sort(n.begin(), n.end());
    
    cout << n.size() << "\n";
    
    for (int i = 0; i < n.size(); i++)
    {
        cout << n[i] << "\n";
    }

    return 0;
}
