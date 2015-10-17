#include <iostream>

using namespace std;

int main()
{
		int M;
		int N;

		cin >> N;
		if (!N)
				return 0;

		for (int j = 0; j < N; j++)
		{
				while (cin >> M && M)
				{
						int i = 0;
						int sum = 0;
						while (i < M)
						{
								int a = 0;
								cin >> a;	
								sum += a;
								i++;	
						}
						cout << sum << endl;
						break;
				}
				if (!M)
					cout << 0 << endl;
		}
		return 0;
}
