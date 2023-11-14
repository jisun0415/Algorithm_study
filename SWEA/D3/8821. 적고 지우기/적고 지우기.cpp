
#include<iostream>

using namespace std;
#include<string>
#include<algorithm>

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
		string str;
        cin>>str;
		int n[10]={0,0,0,0,0,0,0,0,0,0};
        int num;
        int cnt=0;
        
        
        for(int i=0;i<str.size();i++)
        {
        	num=str[i]-'0';
            if(n[num]==0)
            {
            	n[num]=1;
                cnt++;
            }
            else
            { n[num]=0;
             cnt--;
            }
        }
        
        
        cout<<"#"<<test_case<<" "<<cnt<<"\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}