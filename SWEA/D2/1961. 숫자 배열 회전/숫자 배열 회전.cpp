#include <algorithm>
#include <vector>
#include <string>
#include<iostream>
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
        
        vector<vector<int>> a(n, vector<int>(n,0));
        //배열 입력
        for(int i=0; i<n;i++)
        {
        	for(int j=0;j<n;j++)
            {
                
            	cin>>a[i][j];
            }
        }
       
        //이제 돌리기
        vector<vector<int>> b(n, vector<int>(n,0));
        vector<vector<vector<int>>> result(n, vector<vector<int>>(n,vector<int>(n,0)));
        
        for(int i=0;i<n;i++)
        {
        	for(int j=0;j<n;j++)
            {
            	for(int s=0;s<n;s++)
                {
                	b[s][n-1-j]=a[j][s];
                    result[s][i][n-1-j]=a[j][s];
                }
            }
            a=b;
        }
        
        
        cout<<"#"<<test_case<<"\n";
        for(int i=0;i<n;i++)
        {
       		for(int j=0;j<3;j++)
        	{
        		for(int s=0;s<n;s++)
            	{
                    cout<<result[i][j][s];
            	}
                cout<<" ";
        	}
            cout<<"\n";
        }
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}