#include <iostream>

using namespace std;

#if 0
int gcd(int m,int n){
		int r;
		while(r=m%n){
				m=n;
				n=r;
		}
		return n;
}
#else
int gcd(int N, int M)
{
	if (M == 0) return N;

	return gcd(M, N % M);
}
#endif

int main()
{
		int N, M;
		while (cin >> N >> M, -1 != N || -1 != M)
		{

			    if (1 == gcd(M, N))	
					cout << "YES" << endl;
				else
					cout << "POOR Haha" << endl;
		}
		return 0;
}
