#include <iostream>

using namespace std;

int main()
{
		int t;
		cin >> t;
		while(t--)  
		{         
				int count = 0;  
				int i;
				int y, n;
				cin >> y >> n;
				i = y % 4;
				y += (4 - ((0 == i) ? 4 : i));

				while (count < n)
				{  
						if((y%100!=0) || y%400==0) // 尽量用正常的思路去写代码，如果求反，或是多重求反，会出错  
								count++;  
						y = y + 4;
				}  
				cout << y - 4 << endl;;
		} 

		return 0;
}
