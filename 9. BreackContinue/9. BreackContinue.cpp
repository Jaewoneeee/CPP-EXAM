
#include <iostream>

using namespace std;

int main()
{
	for (int i = 0; i < 100; i++)
	{
		//if (i == 59) breack;
		//if (i == 59) continue;
		if ((i % 2) == 0) continue;   // 짝수, 홀수 

		cout << i << ' '; 
	}

	return 0;
}
