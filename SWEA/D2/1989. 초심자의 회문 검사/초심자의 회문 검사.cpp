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
		string str;
        cin>>str;
        
        string str2=str;
        reverse(str2.begin(),str2.end());
        
        if(str.compare(str2)==0)
            cout<<"#"<<test_case<<" "<<1<<"\n";
        else
            cout<<"#"<<test_case<<" "<<0<<"\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}