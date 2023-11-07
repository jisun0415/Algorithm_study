#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;
    int num;
    int max=-9999;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        for(int i=0;i<10;i++)
        {	
            cin>>num;
            if(num>max)
            {
                max=num;
            }
        }
        
        cout<<"#"<<test_case<<" "<<max<<"\n";
		max=-9999;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}