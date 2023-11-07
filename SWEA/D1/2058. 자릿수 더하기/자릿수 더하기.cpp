
#include<iostream>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;
	int result=0;
	while(T>0)
    {
		result+=(T%10);
        T/=10;
    }
    cout<<result<<"\n";
    
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}