#include <iostream>
using namespace std;

int main()
{
    int N;
    int n[1000];
    
    cin>>N;
    
    for(int i=0;i<N;i++)
    {
        cin>>n[i];    
    }
    
    long sum=0;
    long max=0;
    
    for(int i=0;i<N;i++)
    {
        if(n[i]>max)
        {
            max=n[i];    
        }
        sum+=n[i];
    }
    
    cout<<(sum*100.0)/max/N<<"\n";

}
