
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int i = 0;

	//while (i < 10)
	//{
	//	cout << i + 1<< endl;
	//	i++;
	//}

	do {
		cout << i << endl;
		i++;
	} while (i < 10);

	for (int i = 0; i < 10; i = i + 2)
	{
		cout << "for loop i = " << i << endl;
	}

	// 이중for문은 아니지만 이중for문처럼.. 
	// 중간에 어느 값이 같이 만날때까지(이런 로직) 
	for (int n = 0, i = 100; n != i; ++n, --i)
	{
		cout << "n = " << n << " , i = " << i << endl;
	}

	// 배열 값 출력하기 
	int nArr[5] = {1, 3, 5, 7, 9};
	
	for (int i : nArr)
	{
		cout << "Range-Based for loop i = " << i << endl; 
	}

	//string str ("Hello_World");
	char str[] = "Hell_world!!";
	for (char c : str)
	{
		cout << "Range-Based for loop c = " << c << endl;
	}

	return 0;
}
