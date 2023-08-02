#include <iostream>
#include <vector>
using namespace std;

static vector<vector <int>> A;
static vector<bool> visited;

void dfs(int v){
    if(visited[v])
    {
        return;    
    }
    
    visited[v]=true;
    for(int i:A[v])
    {
        if(visited[i]==false)
        {
            dfs(i);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N,M;
    cin>>N>>M;
    A.resize(N+1);
    visited=vector<bool>(N+1,false);
    
    for(int i=0;i<M;i++)
    {
        int s,e;
        cin>>s>>e;
        A[s].push_back(e);
        A[e].push_back(s);
    }
    
    int count=0;
    
    for(int i=1;i<=N;i++)
    {
        if(!visited[i]) //방문하지 않은 노드가 없을 때까지
        {
            count++;
            dfs(i);
        }
    }
    cout<<count<<"\n";
}