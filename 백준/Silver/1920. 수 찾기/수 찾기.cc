#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<int> A(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    sort(A.begin(),A.end());
    
    int m;
    cin>>m;
   for(int i=0;i<m;i++)
   {
       bool find=false;
       int target;
       cin>>target;
       
       int start=0;
       int end=A.size()-1;
       
       while(start<=end)
       {
            int midi=(start+end)/2;
           int midiv=A[midi];
           
           if(midiv>target)
           {
               end=midi-1; 
           }
           else if(midiv<target)
           {
                start=midi+1;
           }
           else
           {
                find=true;
               break;
           }
       }
       
       if(find)
       {
        
       cout<<"1"<<"\n";
       }
       else
       {
           cout<<"0"<<"\n"; 
       }
   }
    
}