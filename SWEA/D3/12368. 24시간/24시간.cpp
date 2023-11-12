
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
		int h1,h2;
        cin>>h1>>h2;
        
        if((h1+h2)>=24)
        {
        	if((h1+h2)%24==0)
                cout<<"#"<<test_case<<" "<<0<<"\n";
            else
            {
            	cout<<"#"<<test_case<<" "<<(h1+h2)%24<<"\n";
            }
        }
        else
            cout<<"#"<<test_case<<" "<<h1+h2<<"\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}