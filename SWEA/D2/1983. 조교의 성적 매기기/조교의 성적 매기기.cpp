#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
    int test_case;
    int T;

    cin >> T;

    for (test_case = 1; test_case <= T; ++test_case)
    {
        int n, k;
        cin >> n >> k;
        vector<double> student(n, 0);
        string Grade[10] = {"A+", "A0",	"A-", "B+", "B0", "B-", "C+", "C0", "C-", "D0"};

        double Mid, Final, Task;

        for (int i = 0; i < n; i++)
        {
            cin >> Mid >> Final >> Task;
            student[i] = Mid * 0.35 + Final * 0.45 + Task * 0.20;
          //  cout<<student[i]<<" ";
        }
        //cout<<"\n";
        
		double score=student[k-1];
        //cout<<score<<"\n";
        sort(student.begin(), student.end(), greater<double>());
        
       // for(int i=0;i<n;i++)
       //     cout<<student[i]<<" ";
       // cout<<"\n";
        
        int idx=0;
        for(int i=0;i<n;i++)
        {
            if(score==student[i])
            {
           		idx=i/(n/10);
                break;
            }
        }
        
        cout << "#" << test_case << " " << Grade[idx] << "\n";
    }

    return 0;
}