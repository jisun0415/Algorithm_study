#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); //종종 시간을 초과하는 문제가 위 3개의 구문 추가로 간단히 해결됌.
    
    int N,M;
    int n[100001]={};
    cin>>N;
    cin>>M;
    
    for(int i=1;i<=N;i++)
    {
        int tmp;
        cin>>tmp;
        n[i]=n[i-1]+tmp;   
     }
    
    for(int s=0;s<M;s++)
    {
        int i,j;
        cin>>i>>j;
        cout<<n[j]-n[i-1]<<"\n";   
    }
    
    
}