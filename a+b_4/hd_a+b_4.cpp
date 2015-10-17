#include <iostream>

using namespace std;

int main()
{
	int N;
	while (cin >> N && N)
	{
		int i = 0;
		int sum = 0;
		while (i < N)
		{
			int a = 0;
			cin >> a;	
			sum += a;
			i++;	
		}
		cout << sum << endl;
	}
	return 0;
}
