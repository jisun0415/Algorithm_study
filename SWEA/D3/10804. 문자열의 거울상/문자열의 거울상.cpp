
#include<iostream>
#include<string>
#include<algorithm>

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
       
        string str2(str.size(),' ');
        int idx=0;
        for(int i=str.size()-1;i>=0;i--)
        {
        	if(str[i]=='b')
                str2[idx]='d';
            else if(str[i]=='d')
                str2[idx]='b';
            else if(str[i]=='p')
                str2[idx]='q';
            else if(str[i]=='q')
                str2[idx]='p';
            idx++;
        }
        
        cout<<"#"<<test_case<<" "<<str2<<"\n";
        
    }
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}