#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include <stack>
using namespace std;

//선끼리 교차하면 안되고 짝지을 수 있어야함
//스택 사용해서 동일한 문자가 들어오면 폭발 해버리게 하는거임
//그럼 결론적으로 길이가 0이면 좋은 문자고 길이가 0이 아니면 안좋은 문자가 되는거임
int main()
{
	int n;
	cin >> n;

	
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		string str;
		stack<char> mystack;
		cin >> str;
		for (int i = 0; i < str.size(); i++)
		{
			if (i!=0&&!mystack.empty()&& mystack.top() == str[i])
				mystack.pop();
			else
				mystack.push(str[i]);
		}
		if (mystack.size() == 0)
			cnt++;
	}

	cout << cnt;
	
	return 0;

}
