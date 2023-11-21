#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> num(n, 0);


	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}

	sort(num.begin(), num.end());

	int result = 0;
	for (int i = 0; i < n; i++)
	{
		int start = 0, end = n - 1;
		
		
		while (start < end)
		{
			if (num[i] < num[start] + num[end])
				end--;
			else if (num[i] > num[start] + num[end])
				start++;
			else
			{
				if (start == i) start++;
				else if (end == i) end--;
				else
				{
					result++;
					break;
				}
			}

		}
	}

	cout << result << "\n";

}