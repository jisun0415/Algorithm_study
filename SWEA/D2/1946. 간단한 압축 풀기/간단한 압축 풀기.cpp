
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
        vector<char> arr;
        
        for(int i=0;i<n;i++)
        {
            char ch;
             int num;
        	cin>>ch>>num;
            for(int i=0;i<num;i++)
            {
            	arr.push_back(ch);
            }
        }
        
        cout<<"#"<<test_case<<"\n";
        for(int i=0;i<arr.size();i++)
        {
            
            if((i)%10==0&&i!=0)
                cout<<"\n";
        	cout<<arr[i];
        }
        cout<<"\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}