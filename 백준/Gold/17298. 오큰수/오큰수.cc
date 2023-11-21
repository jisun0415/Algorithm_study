#include<iostream>
#include<vector>
#include<stack>
#include<queue>

using namespace std;

int main()
{
	
	int n;
	cin >> n;

	vector<int> num(n,0);

	for (int i = 0; i < n; i++)
		cin >> num[i];

	vector<int> result(n,0);
	stack<int> st;
	

	for (int i = n-1; i >= 0 ; i--)
	{
		while (!st.empty() && st.top() <= num[i])
		{
			st.pop();
		}
		if (st.empty())
			result[i]=-1;
		else 
			result[i]=st.top();

		st.push(num[i]);
	}

	for (int i = 0 ; i < n; i++)
	{
		cout << result[i] << " ";
	}

}