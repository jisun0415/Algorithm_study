

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
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
        
        for(int i=0;i<str.size();i++)
        {
            for(int j=i+1;j<str.size();j++)
            {
            	if((str[i]==str[j])&&str[i]!='0')
                {
                    str[i]='0';
                    str[j]='0';
                 	break;
            	}
            }
        }
        string check(str.size(),'0');
        /*
        for(int i=0;i<check.size();i++)
            cout<<check[i]<<" ";
        cout<<"\n";
        */
        sort(str.begin(),str.end());
        
        if(str.compare(check)==0)
            cout<<"#"<<test_case<<" "<<"Good"<<"\n";
        
        else
        {
            cout<<"#"<<test_case<<" ";
        	for(int i=0;i<str.size();i++)
            {
            	if(str[i]!='0')
                    cout<<str[i];
            }
            cout<<"\n";
        }

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}