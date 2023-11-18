#include<vector>
#include<algorithm>
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
		int n;
        cin>>n;
        vector<int> check(10,1);
        
        for(int i=0;i<n;i++)
        {
            int a,b,c,d;
            string  str;
           cin>>a>>b>>c>>d>>str;
            
        	if(str.compare("YES")==0)
        	{
            	check[a]*=2;
                check[b]*=2;
                check[c]*=2;
                check[d]*=2;
        	}
        	else
        	{
        	 	check[a]=0;
                check[b]=0;
                check[c]=0;
                check[d]=0;
        	}
        }
        
      int idx=0;
        int result;
        for(int i=0;i<10;i++)
        {
        	if(check[i]>idx)
            {
                idx=check[i];
                result=i;   
            }
        }
        cout<<"#"<<test_case<<" "<<result<<"\n";

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}