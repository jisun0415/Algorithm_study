
#include<iostream>
#include<vector>
#include<algorithm>

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
        vector<int> check(n,0);
        
        for(int i=0;i<n;i++)
        {
        	cin>>check[i];	
        }
        
        sort(check.begin(), check.end());
        
        int plag=1;
        for(int i=1;i<=n;i++)
        {
        	if(check[i-1]!=i)
            {
            	plag=0;
                break;
            }
        }
        
        if(plag==1)
            cout<<"#"<<test_case<<" "<<"Yes"<<"\n";
        else
            cout<<"#"<<test_case<<" "<<"No"<<"\n";

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}