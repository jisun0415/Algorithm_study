#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;


int main()
{
    int N;
    cin>>N;
    
    vector<int> n(N,0);
    
    for(int i=0;i<N;i++)
        cin>>n[i];
    
    sort(n.begin(), n.end());
    
    for(int i=0;i<N;i++)
        cout<<n[i]<<"\n";

}