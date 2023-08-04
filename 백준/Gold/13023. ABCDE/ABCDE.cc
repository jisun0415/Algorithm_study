#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

static int n;
static vector<vector<int>> A;
static vector<bool> visited;
static bool arrive;
void dfs(int v, int dep)
{
    if(dep==5||arrive)
    {
        arrive=true;
        return;
    }
    
    visited[v]=true;
    
    for(int i:A[v])
    {
        if(!visited[i])
        {
            dfs(i,dep+1);
        }
    }
    visited[v]=false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    arrive=false;
    int m;
    cin>>n>>m;
    A.resize(n);
    visited=vector<bool> (n,false);
        
    for(int i=0;i<m;i++)
    {
        int s,e;
        cin>>s>>e;
        A[s].push_back(e);
        A[e].push_back(s);        
    }
    
    for(int i=0;i<n;i++)
    {
        dfs(i,1);
        if(arrive)
        {
            break;
        }
    }
    
    if(arrive)
    {
        cout<<"1"<<"\n";    
    }
    else
        cout<<"0"<<"\n";
    
}