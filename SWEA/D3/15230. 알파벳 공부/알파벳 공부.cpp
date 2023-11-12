
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
		char check[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        string str;
        cin>>str;
        
        if(str[0]!='a')
            cout<<"#"<<test_case<<" "<<0<<"\n";
        else
        {
            int cnt=0;
        	for(int i=0;i<str.size();i++)
            {
            	if(str[i]==check[i])
                    cnt++;
                else
                    break;
            }
            cout<<"#"<<test_case<<" "<<cnt<<"\n";
        }

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}