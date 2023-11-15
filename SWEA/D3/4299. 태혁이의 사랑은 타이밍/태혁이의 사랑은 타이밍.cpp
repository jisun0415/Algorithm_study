#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
		int d,h,m;
        
        cin>>d>>h>>m;
      
        int minute=0;
        //일 계산
        minute+=((d-11)*24*60);
        //시 계산
        minute+=(h-11)*60;
        //분 계산
        minute+=m-11;
       
        if(minute<0)
            cout<<"#"<<test_case<<" "<<-1<<"\n";
        else
        cout<<"#"<<test_case<<" "<<minute<<"\n";
        
        
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}