#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
     int n;
    cin>>n;
    
    int start=1,end=1,sum=1,count=1;
    
    while(end!=n)
    {
        if(sum==n)
        {
            count++;
            end++;
            sum=sum+end;
        }
        else if(sum>n)
        {
            sum=sum-start;
            start++;
        }
        else
        {
             end++;
            sum=sum+end;
        }
    }
    
    cout<<count<<"\n";
}    