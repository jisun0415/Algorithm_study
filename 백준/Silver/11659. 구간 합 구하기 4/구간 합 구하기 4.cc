#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a, b;
    cin >> a >> b;
    vector<int> S(a,0);
    
    int N;
    for(int i=1;i<=a;i++)
    {
            cin>>N;
            S[i]=S[i-1]+N;
            
    }
    
    int c,d;
    for(int i=0;i<b;i++)
    {
        cin>>c>>d;
        cout<<S[d]-S[c-1]<<"\n";
    }
}