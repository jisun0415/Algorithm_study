
#include<iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main(int argc, char** argv)
{
	int num;
    
    cin>>num;
    
    for(int test_case=0;test_case<num;test_case++)
    {	
        
        int n,m;
        cin>>n>>m;
        
        vector<long> A(n,0);
        vector<long> B(m,0);
        
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        
        for(int i=0;i<m;i++)
        {
            cin>>B[i];
        }
        
       
       vector<long> a, b;

        if (A.size() < B.size()) {
            a.assign(A.begin(), A.end());
            b.assign(B.begin(), B.end());
        }
        else {
            a.assign(B.begin(), B.end());
            b.assign(A.begin(), A.end());
        }
        /*
        for(int i=0;i<a.size();i++)
           cout<<a[i]<<" ";
        cout<<"\n";
        for(int i=0;i<b.size();i++)
           cout<<b[i]<<" ";
        cout<<"\n";*/
        
       //------ 여기부터 진짜 시작 ------
        
        int max=-999;
        
        for(int i=0;i<b.size()-a.size()+1;i++)
        {
    	    int result=0;
            for(int j=0;j<a.size();j++)
            {
        	    result+=(a[j]*b[i+j]);
            }
            if(max<result)
                max=result;
        }
        
        cout<<"#"<<test_case+1<<" "<<max<<"\n";
            
    }
    
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}