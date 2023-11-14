
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
		int n, d;
        cin>>n>>d;
        
        int result;
        
        result=d*2+1;
        if(n%result==0)
            cout<<"#"<<test_case<<" "<<n/result<<"\n";
        else
             cout<<"#"<<test_case<<" "<<n/result+1<<"\n";

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}