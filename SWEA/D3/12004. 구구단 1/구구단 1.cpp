
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
		int n;
        cin>>n;
        
        int plag=0;
        
        for(int i=1;i<=9;i++)
        {
        	for(int j=1;j<=9;j++)
            {
            	if(i*j==n)
                    plag=1;
            }
        }
        
        if(plag==0)
            cout<<"#"<<test_case<<" "<<"No"<<"\n";
        else
            cout<<"#"<<test_case<<" "<<"Yes"<<"\n";

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}