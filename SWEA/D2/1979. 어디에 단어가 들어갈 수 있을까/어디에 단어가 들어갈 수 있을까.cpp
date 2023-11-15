#include<string>
#include<algorithm>
#include<iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
		int n,k;
        
        cin>>n>>k;
        
        vector<vector<int>> arr(n,vector<int>(n,0));
        
        //입력
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
            	cin>>arr[i][j];
            }
        }
        
        int result=0;
        
        for(int i=0;i<n;i++)
        {
                 int cnt1=0,cnt2=0;       
        	for(int j=0; j<n; j++)
            {
                
            		if(arr[i][j]==1) //가로 확인
                    {
                        cnt1++;
                    }
                	else
                    {
                        if (cnt1==k)
                    	{  result++;
                        }
                			cnt1=0;
                        
                    }
             
                	if(arr[j][i]==1) //세로 확인
                    	cnt2++;
                	else
                	{
                		if(cnt2==k)
                    	{	  
                        	result++;
                        }
                			cnt2=0;
                    
                	}
            }
            if(cnt1==k)
                result++;
            if(cnt2==k)
                result++;

        }
        
         cout<<"#"<<test_case<<" "<<result<<"\n";
        
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}