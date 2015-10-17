#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	while (N--)
	{
		int M;
		cin >> M;
		int sum = 0;
		while (M--)
		{
			int a;
			cin >> a;
			sum += a;
		}
		cout << sum ;
		if (N)
			cout << endl << endl;
		else
			cout << endl;
	}
	return 0;
}
