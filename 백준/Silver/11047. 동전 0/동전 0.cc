#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,k;
    cin>>n>>k;
    vector<int> money(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>money[i];
    }
    
    int cnt=0;
    for(int i=n-1;i>=0;i--)
    {
        if(k>=money[i])
        {
            cnt+=k/money[i];
            k%=money[i];
        }
    }
    
    cout<<cnt;
}