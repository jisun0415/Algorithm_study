
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
        vector<int> num(n,0);
        int max1=0, max2=0;
        int m1, m2;
        
        for(int i=0;i<n;i++)
        {
        	cin>>num[i];            
        }
       
        for(int i=0;i<n-1;i++)
        {
            if(num[i]>num[i+1]) //내려가는거
            {
            	m2=num[i]-num[i+1];
                if(max2<m2)
                    max2=m2;
            }
            else //올라가는거
            {
            m1=num[i+1]-num[i];
                if(max1<m1)
                    max1=m1;
            }
        }
        
        cout<<"#"<<test_case<<" "<<max1<<" "<<max2<<"\n";
        
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}