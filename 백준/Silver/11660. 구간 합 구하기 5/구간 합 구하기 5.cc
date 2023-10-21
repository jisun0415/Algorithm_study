#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a, b;
    int n;
    cin >> a >> b;
    vector<vector<int>> S(a+1,vector<int>(a+1,0));
    
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            cin>>n;
            S[i][j]=S[i][j-1]+S[i-1][j]-S[i-1][j-1]+n;
        }
    }
    
    
    for(int i=0;i<b;i++)
    {
        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        
        cout<<S[x2][y2]-S[x1-1][y2]-S[x2][y1-1]+S[x1-1][y1-1]<<"\n";
    }
    
    return 0;
}