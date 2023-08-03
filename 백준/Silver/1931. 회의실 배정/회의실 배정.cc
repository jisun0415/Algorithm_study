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
        if(save<=A[i].second)//A[i].second는 새로운 회의 시작 시간이고 save는 이전의 회의끝난 시간. 즉 save가 작거나 같다는 A[i]번째 회의 시작시간이랑 안겹치거나 끝나자마자 시작하는 경우 
        {
            save=A[i].first;
            cnt++;
        }
    }
    
    cout<<cnt<<"\n";
    
}