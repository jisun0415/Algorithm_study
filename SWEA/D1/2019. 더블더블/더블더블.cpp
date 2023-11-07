#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int n;
    cin>>n;
    
    cout<<1<<" ";
    int num=1;
   while(n>0)
    {
        num*=2;
        cout<<num<<" ";
       n--;
    }
    
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}