#include <iostream>
#include <string>
using namespace std;


int main()
{
	string x1, x2;
	string r;
	
		cin>>x1;
	
		cin >> x2;
		for (int i = 2; i >= 0; i--)
		{
			if (x1[i] > x2[i])
			{
				r = x1; break;
			}
			else if(x1[i]<x2[i])
			{r = x2; break;}
		}
		cout << r[2] << r[1] << r[0];


}