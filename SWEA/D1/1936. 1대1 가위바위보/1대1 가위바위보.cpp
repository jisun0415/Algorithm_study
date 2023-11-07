
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int A,B;
    cin>>A>>B;
    
    if(A>B)
        cout<<"A";
    else if(A<B)
        cout<<"B";
    else
        cout<<"입력값이 잘 못 되었습니다.";
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}