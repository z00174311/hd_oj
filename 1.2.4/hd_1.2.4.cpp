#include <cstdio>
#include <iostream>
#include <string>

using namespace std;


int main()
{
		string buf;
		string result;

		while (getline(cin, buf))
		{
				if ('#' == buf[0])	
						break;

				int i = 0;
				while (i < buf.length())
				{
						char a = buf[i];
						char t[4];

						switch(a - ' ')
						{
								case 0:	
								case 1:	
								case 4:	
								case 5:	
								case 8:	
								case 9:	
								case 10:	
										sprintf(t, "%%%x", a);
										result.append(t);
										break;
								default:
										result.append(1, a);
										break;
						}

						i++;
				}

				cout << result << endl;
				result.clear();
				buf.clear(); // this will cause the running error (access violation), attention

		}


		return 0;
}
