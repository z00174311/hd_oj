#include <iostream>

using namespace std;


int main()
{
	int N, M;
	while (cin >> N >> M)
	{
		if (-1 == N && -1 == M)	
		{
			break;	
		}

		if (N < M)
		{
			M = M % N;		
		}

		while (M != 0)
		{
			int temp = M;	
			M = N % M;
			N = temp;
		}
		
		if (N == 1)
			cout << "YES" << endl;
		else 
			cout << "POOR Haha" << endl;


	}
	return 0;
}
