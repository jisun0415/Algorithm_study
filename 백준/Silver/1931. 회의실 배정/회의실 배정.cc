#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
        
    cin>>n;
    vector<pair<int, int>> A(n); //n행으로 이루어진 2차원 A벡터
    
    for(int i=0;i<n;i++)
    {
        cin>>A[i].second>>A[i].first;
    }
    
    sort(A.begin(), A.end());
    int cnt=0;
    int save=0;
    for(int i=0;i<n;i++)
    {
        if(save<=A[i].second)
        {
            save=A[i].first;
            cnt++;
        }
    }
    
    cout<<cnt<<"\n";
    
}