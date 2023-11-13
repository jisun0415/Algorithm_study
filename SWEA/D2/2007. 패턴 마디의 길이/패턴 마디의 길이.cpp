
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
        //cout<<str;
        
        for(int i=1;i<str.size();i++)
        {
            string tmp;
        	string str2;
        	//str2=str.substr(0,5);
           // tmp=str.substr(5,5);
            //cout<<tmp<<"\n";
            if(str[i]==str[0])
            {
               // cout<<i<<"\n";
                str2=str.substr(0,i);
                //cout<<str2;
                tmp=str.substr(i,i);
                //cout<<tmp;
               if(tmp.compare(str2)==0)
                {  
                    cout<<"#"<<test_case<<" "<<i<<"\n";
                	break;
                }
            }
             
        }
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}