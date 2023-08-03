#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int money=1000-n;
    vector<int> select={500,100,50,10,5,1};
    
    int i=0;
    int cnt=0;
    while(1)
    {
        money-=select[i];
        cnt++;
        if(money<0)
        {
            money+=select[i];
            cnt--;
            i++;
        }
        else if(money==0)
        {
            cout<<cnt;
            break;
        }
    }
    


}    