
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;
	int result=0;
	for(test_case = 1; test_case <= T; ++test_case)
	{
		result+=test_case;
	}
    
    cout<<result;
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}