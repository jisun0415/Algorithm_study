
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
		int n;
        cin>>n;
        
        int num=1;
        vector<vector<int>> N(n, vector<int>(n,0));
        int i=0,j=0;
       	int n1=n-1, n2=0;
        
        while(num!=n*n)
        {
            //오른쪽
        	while(j<n1)
            {
                N[i][j]=num;
                num++;
                j++;
            }
                
           //아래
            while(i<n1)
            {
            	N[i][j]=num;
                num++;
                i++;
            }
            n1--;
                
           //왼쪽
            while(j>n2)
            {
            	N[i][j]=num;
                num++;
                j--;
            }
            n2++;
           //위쪽
            while(i>n2)
            {
                N[i][j]=num;
                num++;
                i--;
            }
        }
        N[i][j]=num;
        
        cout<<"#"<<test_case<<"\n";
        
        for(int i=0;i<n;i++)
        {
        	for(int j=0;j<n;j++)
                cout<<N[i][j]<<" ";
            cout<<"\n";
        }

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}