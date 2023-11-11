#include<vector>
#include<string>
#include<algorithm>
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
		int money;
        cin>>money;
        int cnt[8]={0,0,0,0,0,0,0,0};
        
       
        if(money/50000!=0)
        {
        	cnt[0]+=money/50000;
            money%=50000;
        }
        
        if(money/10000!=0)
        {
            cnt[1]+=money/10000;
            money%=10000;
        }
         if(money/5000!=0)
        {
            cnt[2]+=money/5000;
            money%=5000;
        }
         if(money/1000!=0)
        {
            cnt[3]+=money/1000;
            money%=1000;
        }
         if(money/500!=0)
        {
            cnt[4]+=money/500;
            money%=500;
        }
         if(money/100!=0)
        {
            cnt[5]+=money/100;
            money%=100;
        }
         if(money/50!=0)
        {
            cnt[6]+=money/50;
            money%=50;
        }
         if(money/10!=0)
        {
            cnt[7]+=money/10;
            money%=10;
        }
        
        cout<<"#"<<test_case<<"\n";
        
        for(int i=0;i<8;i++)
        {
        	cout<<cnt[i]<<" ";
        }
        cout<<"\n";
        
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}