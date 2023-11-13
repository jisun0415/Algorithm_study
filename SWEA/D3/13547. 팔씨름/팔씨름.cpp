
#include<iostream>
#include<string>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
		string str;
        cin>>str;
        int check[2]={0,0};
        
        for(int i=0;i<str.size();i++)
        {
        	if(str[i]=='o')
                check[0]++;
            else
                check[1]++;
        }
        
        if(check[1]<8)
            cout<<"#"<<test_case<<" "<<"YES"<<"\n";
        else
        {
            cout<<"#"<<test_case<<" "<<"NO"<<"\n";
        }

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}