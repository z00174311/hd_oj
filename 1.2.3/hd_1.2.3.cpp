#include <iostream>

using namespace std;

int main()
{
		int T;
		cin >> T;
		while (T--)
		{
				int N;
				cin >> N;
				int M = N % 10;
				int arr[10];
				if (M == 0 || M == 1)
				{
					cout << M << endl;
					continue;
				}
				arr[0] = M;
				int tmp = (M * M) % 10;	
				arr[1] = tmp;
				int i = 2;
				while (tmp != M && i < N)
				{
					tmp = (tmp * M)	% 10;
					arr[i] = tmp;
					i++;
				}

				if (i >= N)
				{
					cout << tmp << endl;	
				}
				else
				{
					int j = N % (i - 1);	
					if (j == 0)
						cout << arr[i - 2] << endl;
					else 
						cout << arr[j - 1] << endl;
				}

		}
		return 0;
}
