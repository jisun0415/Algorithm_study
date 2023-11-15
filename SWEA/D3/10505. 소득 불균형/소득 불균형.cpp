
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
        int Sum=0;
        vector<int> num(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>num[i];
            Sum+=num[i];
        }
        
        int cnt=0;
        int result=Sum/n;
        
       for(int i=0;i<n;i++)
       {
       	if(num[i]<=result)
            cnt++;
       }
        
        cout<<"#"<<test_case<<" "<<cnt<<"\n";

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}