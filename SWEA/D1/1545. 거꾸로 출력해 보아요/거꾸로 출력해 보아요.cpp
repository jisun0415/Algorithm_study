
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;
	int S=T;
	for(test_case = T; test_case >=0; test_case--)
	{
        cout<<S<<" ";
        S--;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}