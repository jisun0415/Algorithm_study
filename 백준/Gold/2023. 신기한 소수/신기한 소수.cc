#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
static int n;
bool isPrime(int number)
{
    for(int i=2;i<=number/2;i++)
    {
        if(number%i==0)
        {
            return false;
        }
    }
    return true;
}

void dfs(int number, int jarisu)
{
    if(jarisu==n)
    {
        if(isPrime(number))
        {
            cout<<number<<"\n";
        }
    }
    
    for(int i=1;i<=10;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        if(isPrime(number*10+i))
        {
            dfs(number*10+i,jarisu+1);
        }
    }
    
}
int main()
{
    cin>>n;
    dfs(2,1);
    dfs(3,1);
    dfs(5,1);
    dfs(7,1);
}