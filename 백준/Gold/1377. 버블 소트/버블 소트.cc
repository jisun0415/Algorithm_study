#include <iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int N;
    cin>>N;
    
    vector<pair<int, int>> v(N);
   
    for(int i=0;i<N;i++)
    {
        cin>>v[i].first;
        v[i].second=i;
    }
    
    sort(v.begin(), v.end());
    
    int ans=-1;
    for(int i=0;i<N;i++)
    {
        if(ans<v[i].second-i)
            ans=v[i].second-i;
    }
    
    cout<<ans+1<<"\n";
        
    
    
}