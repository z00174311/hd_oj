#include <iostream>

using namespace std;

int main()
{
	int N;
	int a, b;
	cin >> N;
	int i = 0;
	while (i < N)
	{
		cin >> a >> b;
		cout << a + b << endl;
		i++;	
	}
	return 0;
}
