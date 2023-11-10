
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
	    int num;
        cin>>num;
        int cnt2=0, cnt3=0,cnt5=0,cnt7=0,cnt11=0;
        
        while(num%2==0)
        {
               cnt2++;
               num/=2;         
        }
        while(num%3==0)
        {
                cnt3++;
                num/=3;    
        }
        
        while(num%5==0)
        {
                cnt5++;
                num/=5;
        }
           
        while(num%7==0)
        {
                cnt7++;
                num/=7;
         }
            
        while(num%11==0)
        {
                cnt11++;
                num/=11;
         }
             
            cout<<"#"<<test_case<<" ";
            cout<<cnt2<<" "<<cnt3<<" "<<cnt5<<" "<<cnt7<<" "<<cnt11<<"\n";      
        }
	

	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}