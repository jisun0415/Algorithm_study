#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main(int argc, char** argv)
{
    int test_case;
    int T;

    T=10;

    for (test_case = 1; test_case <= T; test_case++)
    {
        int n[100][100];
        int num;
        cin>>num;
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j < 100; j++)
            {
                cin >> n[i][j];
            }
        }

        int sum3 = 0, sum4 = 0;
        int max1=0, max2=0;

        for (int i = 0; i < 100; i++)
        {
            int sum1=0, sum2=0;
            sum3 = n[i][i];
            sum4 = n[i][99 - i];
            for (int j = 0; j < 100; j++)
            {
                sum1 += n[i][j]; //행 더하기
                sum2 += n[j][i];//열 더하기
            }
            max2 = max(max2,  max(sum1, sum2));
        }
        max2 = max(max2, max(sum3, sum4));
        
        cout << "#" << num << " " << max2 << "\n";

    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}