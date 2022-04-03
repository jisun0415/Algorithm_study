#include <iostream>
#include <string>

int main(void)
{
	using namespace std;

	int A;
	string B;
	cin >> A;
	cin >> B;

	cout << A * (B[2] - '0') << endl;
	cout << A * (B[1] - '0') << endl;
	cout << A * (B[0] - '0') << endl;
	cout << A *stoi(B) << endl;

	return 0;

}
