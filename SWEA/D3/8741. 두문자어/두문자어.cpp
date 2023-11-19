
#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
		string str1,str2,str3;
        cin>>str1>>str2>>str3;
        char ch1, ch2, ch3;
        ch1=toupper(str1[0]);
        ch2=toupper(str2[0]);
        ch3=toupper(str3[0]);
        
        vector<char> result;
        result.push_back(ch1);
        result.push_back(ch2);
        result.push_back(ch3);
        
        cout<<"#"<<test_case<<" ";
        for(int i=0;i<3;i++)
            cout<<result[i];
        cout<<"\n";
        
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}