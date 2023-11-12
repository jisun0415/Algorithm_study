
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
        
        if(str[0]!=str[1])
        {
        	if((str[0]==str[2]&&str[1]==str[3])||(str[1]==str[2]&&str[0]==str[3]))	
                cout<<"#"<<test_case<<" "<<"Yes"<<"\n";
            else
                cout<<"#"<<test_case<<" "<<"No"<<"\n";
        }
       else
        {
        	if(str[2]==str[3]&&str[1]!=str[2])
                cout<<"#"<<test_case<<" "<<"Yes"<<"\n";
           else
               cout<<"#"<<test_case<<" "<<"No"<<"\n";
        }
        
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}